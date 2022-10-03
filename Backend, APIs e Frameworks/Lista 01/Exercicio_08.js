const CONVERT_HEIGHT = 100;

let personTall = prompt("DIGITE SUA ALTURA [CM]: ");
let buildShadow = prompt("DIGITE O COMPRIMENTO DA SOMBRA DO PREDIO [CM]: ");
let personShadow = prompt("DIGITE O COMPRIMENTO DA SUA SOMBRA [CM]: ");

let howTall = personTall / personShadow;
let buildHeight = (howTall * buildShadow) / CONVERT_HEIGHT;

alert(`O PREDIO POSSUI ${buildHeight} METROS DE ALTURA`);

