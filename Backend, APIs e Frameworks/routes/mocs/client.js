const {Cliente} = require('../models/Client');

const client = [
    new Cliente('Carlos', 25),
    new Cliente('Lais', 25),
    new Cliente('Matheus', 19)
]

function createClient(name, age){
    client.push(new Cliente(name, age));
}

module.exports = {client, createClient};