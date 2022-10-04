const PORCENT_GET_FAT = 0.15;
const PORCENT_LOSE_WEIGHT = 0.2;

let currentWeight = prompt("DIGITE SEU PESO ATUAL: ");

let gainWeight = currentWeight * (1 + PORCENT_GET_FAT);
let loseWeight = currentWeight * (1 - PORCENT_LOSE_WEIGHT);

alert(`EM CASO DE ENGORDAR 15% DO PESO ATUAL, SEU PESO SERA DE ${gainWeight}Kg, MAS EM CASO DE EMAGRECER 20% SEU PESO SERA DE ${loseWeight}Kg`);


