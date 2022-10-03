const SMALL_ML =  350
const MEDIUM_ML =  600
const BIG_ML =  2000
const CONVERT_LITER = 1000.0

let amountSmallCoke = prompt("QUANTIDADE COMPRADA [LATA 350ML = ]: ");
let amountMediumCoke = prompt("QUANTIDADE COMPRADA [GARRAFA 600ML = ]: ");
let amountBigCoke = prompt("QUANTIDADE COMPRADA [GARRAFA 2L]: ");

let volumeCokeTotal = ((amountSmallCoke * SMALL_ML) + (amountMediumCoke * MEDIUM_ML) + (amountBigCoke * BIG_ML)) / CONVERT_LITER;
alert(`LITRO TOTAL: ${volumeCokeTotal}L`)

