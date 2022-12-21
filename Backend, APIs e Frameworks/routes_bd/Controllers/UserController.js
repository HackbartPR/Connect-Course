const {DB} = require('../Database/DB');

function listAllUsers(){

    DB.open();
    const results = DB.select_many_sql('SELECT * FROM users');
    DB.close();
    return results;
}

module.exports = {listAllUsers};