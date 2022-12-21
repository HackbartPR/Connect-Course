const express = require('express');
const app = express();

const PORT = 3000;

app.use('/', (req,res)=>{
    const date = createDate();
    console.log(date);
    res.write(date);
    res.end();
})

function createDate(){
    const date = new Date();
    const month = date.getMonth();
    const year = date.getFullYear();
    const day = date.getDay();

    const hour = date.getHours();
    const minutes = date.getMinutes();

    return `${day}/${month}/${year} - ${hour}:${minutes}`;
}

app.listen(PORT, ()=>{
    console.log(`Server Running on Port ${PORT}`);
})