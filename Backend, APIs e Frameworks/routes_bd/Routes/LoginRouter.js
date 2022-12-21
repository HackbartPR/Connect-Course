//Bibliotecas
const path = require('path');
const express = require('express');
const router = express.Router();

//Controllers
const {listAllUsers} = require('../Controllers/UserController');

router.get('/', (req,res)=>{
    res.sendFile(path.join(__dirname, '../Public/index.html'));
})

router.use(express.static(path.join(__dirname, '../Public/index.html')));

router.post('/', (req,res)=>{
    console.log(req.body);
})

module.exports = router;