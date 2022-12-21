const express = require('express');
const path = require('path');
const app = express();

const PORT = 3000;


app.use('/usuario', (req,res)=>{
    res.send('Voce se conectou na base de dados do usuario');
});

app.use('/produtos', (req,res)=>{
    res.send('Página para cadastro de um novo produto');
});

app.use('/', express.static(path.join(__dirname, '/public')));

app.listen(PORT, ()=>{
    console.log(`Server Running on Port ${PORT}`);
})