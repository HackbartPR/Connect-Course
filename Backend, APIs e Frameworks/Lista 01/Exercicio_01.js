const AMOUNT_CHEESE = 2;
const AMOUNT_HAM = 1;
const AMOUNT_BEEF = 1;
const WEIGHT_CHEESE_UNITY = 50;
const WEIGHT_HAM_UNITY = 50;
const WEIGHT_BEEF_UNITY = 100;
const CONVERT_KG = 1000;

let totalSandwiches = prompt("DIGITE A QUANTIDADE DE SANDUICHES A SEREM FEITOS: ");
let cheeseWeightNeeded = (totalSandwiches * AMOUNT_CHEESE * WEIGHT_CHEESE_UNITY) / CONVERT_KG;
let hamWeightNeeded = (totalSandwiches * AMOUNT_HAM * WEIGHT_HAM_UNITY) / CONVERT_KG;
let beefWeightNeeded = (totalSandwiches * AMOUNT_BEEF * WEIGHT_BEEF_UNITY) / CONVERT_KG;

alert(`PARA PRODUZIR ${totalSandwiches} SANDUICHE(S), SERAO NECESSARIOS: ${cheeseWeightNeeded}Kg DE QUEIJO, %${hamWeightNeeded}Kg DE PRESUNTO E ${beefWeightNeeded}Kg DE HAMBURGUER\n`);

