const express = require('express');
const app = express();

const PORT = 3000;

app.use('/', (req,res)=>{
    const obj = req.query;

    if(Object.keys(req.query).length === 0){
        res.write('Nenhum parametro informado');
    }

    console.log(Object.entries(req.query).forEach(value=>{
        res.write(`${value[0]} = ${value[1]}\n`);
    }));

    res.end();
    
})


app.listen(PORT, ()=>{
    console.log(`Server Running on Port ${PORT}`);
})