let PRICE_IDENTIF_RING = 4.0
let PRICE_FOOD_RING = 3.5
let AMOUNT_INDENT_RING = 1
let AMOUNT_FOOD_RING = 2

let amountChicken = prompt("QUANTIDADE TOTAL DE FRANGOS DA PRODUCAO: ");

let priceIdentByChicken = PRICE_IDENTIF_RING * AMOUNT_INDENT_RING * amountChicken;
let priceFoodByChicken = PRICE_FOOD_RING * AMOUNT_FOOD_RING * amountChicken;
let priceTotal = priceFoodByChicken + priceIdentByChicken;

alert(`PARA ${amountChicken} FRANGOS SERA GASTO R$${priceTotal}`);
