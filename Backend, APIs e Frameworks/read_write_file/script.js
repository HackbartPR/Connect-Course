const path = require("path");
const fs = require("fs");
const { stringify } = require("querystring");
/* const arquivo = require("./nomes.txt"); */

/* console.log(path.parse(__filename)) */
/* console.log(path.join(__dirname, "dados", "alunos")); */

/* fs.mkdir('pasta', ()=>{
    console.log("Criou a pasta")
}) */

/* fs.writeFile('index.html', 'texto do arquivo', ()=>{
    console.log("criou o arquivo")
}) */

/* const nomes = ['Carlos', "Diego", "Willyan", "Bruno", "André", "Guilherme"];
const strNomes = nomes.toString()

fs.writeFile("nomes.txt", strNomes, ()=>{
    console.log("criou o arquivo")
})

const objNomes = [
    {nome: 'Carlos', idade: 25},
    {nome: 'Diego', idade: 28},
    {nome: 'Willyan', idade: 27},
    {nome: 'Guilherme', idade: 24},
    {nome: 'André', idade: 29},
    {nome: 'Bruno', idade: 22}
]

const strObjNomes = JSON.stringify(objNomes)
fs.writeFile("nomes.txt", strObjNomes, ()=>{
    console.log("criou o arquivo")
}) */

/* fs.rename('nomes.txt', 'nomes.json', ()=>{
    console.log("Renomeado")
}) */


const read = fs.readFileSync('nomes.json', 'utf8');
console.log(read);

const obj = JSON.parse(read);
console.log(obj)

obj.push({nome:'Lucas', idade:28})
console.log(obj)

const strObj = JSON.stringify(obj)
fs.writeFile("nomes.json", strObj, ()=>{
    console.log("Feito");
})

const readAgain = fs.readFileSync('nomes.json', 'utf8');
console.log(readAgain);


