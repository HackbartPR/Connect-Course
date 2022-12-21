const express = require('express');
const app = express();

const PORT = 3500;

app.use('/', (req,res)=>{
    console.log('Alguém entrou no site')
    res.write('Voce esta acessando minha pagina index');
    res.end();
})

app.listen(PORT, ()=>{
    console.log(`Server Running on Port ${PORT}`);
})