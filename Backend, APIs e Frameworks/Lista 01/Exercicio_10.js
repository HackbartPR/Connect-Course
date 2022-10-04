const CONVERT_METER = 100;

let diameter = prompt("DIGITE O DIAMETRO DA CAIXA D'AGUA EM CENTIMETROS: ");

let height = prompt("DIGITE A ALTURA DA CAIXA D'AGUA EM CENTIMETROS: ");

let diameterConverted = diameter / CONVERT_METER;
let heightConverted = height / CONVERT_METER;

let volume = Math.PI * Math.pow( diameterConverted / 2 ,2) * heightConverted;

alert(`O VOLUME DA CAIXA E ${volume.toFixed(2)} LITROS`);
