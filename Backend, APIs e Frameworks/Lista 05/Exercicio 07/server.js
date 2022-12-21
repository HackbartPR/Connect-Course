const express = require('express');
const path = require('path');
const app = express();

const PORT = 3000;
let count = 0;

app.use(express.json());
app.use(express.urlencoded({ extended: true}));

app.use('/', express.static(path.join(__dirname, '/public')));

app.post('/', (req,res)=>{
    count++;
    console.log(`${count} pessoas já responderam a este formulário`);
    res.write(`${count} pessoas já responderam a este formulário\n`);
    res.write(`O usuario ${req.body.name}, o qual possui ${req.body.age} anos, mora na cidade ${req.body.city}`);
    res.end();
})

app.listen(PORT, ()=>{
    console.log(`Server Running on Port ${PORT}`);
})