const functions = require("firebase-functions");
// // Create and deploy your first functions
// // https://firebase.google.com/docs/functions/get-started
//
// exports.helloWorld = functions.https.onRequest((request, response) => {
//   functions.logger.info("Hello logs!", {structuredData: true});
//   response.send("Hello from Firebase!");
// });
const admin = require("firebase-admin");
const {BigQuery} = require("@google-cloud/bigquery");

admin.initializeApp();
const bigquery = new BigQuery();

exports.transferDataToBigQuery = functions.database
    .ref("/players/{userId}/{gameSessionId}")
    .onCreate(async (snapshot, context) => {
      const userId = context.params.userId;
      const gameSessionId = context.params.gameSessionId;
      const gameData = snapshot.val();

      // Flatten the data
      const flattenedGameData = {
        "userId": userId,
        "gameSessionId": gameSessionId,
        ...gameData,
        "gyroData_x": gameData.gyroData.x,
        "gyroData_y": gameData.gyroData.y,
        "gyroData_z": gameData.gyroData.z,
      };

      delete flattenedGameData.gyroData;

      // Insert the flattened data into the BigQuery table
      await bigquery
          .dataset("BrightLights2023") // dataset ID in BigQuery
          .table("BrightLights2023Table") // the table name in BigQuery
          .insert(flattenedGameData);
    });

exports.deleteUserFromBigQuery = functions.https.onCall(
    async (data, context) => {
      const userId = data.userId;
      // eslint-disable-next-line max-len
      const query = `DELETE FROM \`brightlights2023-3b514.BrightLights2023.BrightLights2023Table\` WHERE userId = "${userId}"`;


      await bigquery.query({query: query});
    });
