//Bibliotecas
const express = require('express');
const router = express.Router();
const ejs = require('ejs');

//Controllers
const {listAllUsers} = require('../Controllers/UserController');

//Métodos
router.get('/', async (req, res)=>{
    let listUser = await listAllUsers();
    res.send(listUser);
    console.log(listUser);
})

module.exports = router;