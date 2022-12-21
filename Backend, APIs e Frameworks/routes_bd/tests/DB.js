const {DB} = require('../Database/DB');

getConnection();

function getConnection(){
    DB.open();
    console.log(DB);
    DB.close();
}