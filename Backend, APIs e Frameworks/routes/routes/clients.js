const path = require('path');
const express = require('express');
const router = express.Router();
const {client, createClient} = require('../mocs/client');

router.get('/', (req,res)=>{
    res.json(JSON.stringify(client));
});

router.get('/save', (req,res)=>{
    res.sendFile(path.join(__dirname, '../public/save_client.html'));
})

router.post('/save', (req,res)=>{
    createClient(req.body.nome, req.body.idade);
    res.send("Cliente Cadastrado com Sucesso!");
})

module.exports = router;