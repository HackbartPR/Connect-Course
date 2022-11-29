const express = require('express');
const router = express.Router();
const {cars} = require('../mocs/car');

router.get('/', (req,res)=>{
    res.json(JSON.stringify(cars));
});

module.exports = router;