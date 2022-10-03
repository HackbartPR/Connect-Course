const ONE_CENT =  1
const FIVE_CENT =  5
const TEN_CENT =  10
const TWENTY_FIVE_CENT =  25
const FIFTY_CENT =  50

const CONVERT_REAIS = 100.0

let amountOneCENT =  prompt(`QUANTIDADE DE MOEDAS:\n01 CENTAVO: `);
let amountFiveCENT =  prompt(`QUANTIDADE DE MOEDAS:\n05 CENTAVOS: `);
let amountTenCENT =  prompt(`QUANTIDADE DE MOEDAS:\n10 CENTAVOS: `);
let amountTwentyFiveCENT =  prompt(`QUANTIDADE DE MOEDAS:\n25 CENTAVOS: `);
let amountFiftyCENT =  prompt(`QUANTIDADE DE MOEDAS:\n50 CENTAVOS: `);

let totalCents = ((amountOneCENT * ONE_CENT) + (amountFiveCENT * FIVE_CENT) + (amountTenCENT * TEN_CENT) + (amountTwentyFiveCENT * TWENTY_FIVE_CENT) + (amountFiftyCENT * FIFTY_CENT));

let totalConverted = totalCents / CONVERT_REAIS;

alert(`VALOR TOTAL DE R$${totalConverted}`);



