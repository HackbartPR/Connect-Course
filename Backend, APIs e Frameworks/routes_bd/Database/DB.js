const mysql = require('mysql2');

class DB {
    static connection;
    
    static config = {
        host: process.env.DB_HOST,
        user: process.env.DB_USER,
        password: process.env.DB_PASSWORD,
        database: process.env.DB_DATABASE,
        port: process.env.DB_PORT
    }

    static open(){
        DB.connection = mysql.createConnection(DB.config);
        DB.connection.connect();
    }

    static close(){
        DB.connection.end();
    }

    static async select_many_sql(query){

        const result = await DB.connection.promise().query(query);

        return result[0];
    }

    static select_sql(query){
        let res = "";
        DB.connection.query(query, (error, result, fields)=>{
            if(error) throw error;
            res = result;
        })

        return res;
    }

    static insert_sql(query){
        DB.connection.query(query, (error, result, fields)=>{
            if(error) throw error;
        })
    }
}

module.exports = {DB};