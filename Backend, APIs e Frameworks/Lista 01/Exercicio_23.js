const CONV_YEAR_DAY = 365.0;
const CONV_MONTH_DAY = 30.0;
const CONV_WEEK_DAY = 7.0;

let currentDay = prompt("DIGITE O DIA ATUAL: ");
let currentMonth = prompt("DIGITE O MES ATUAL: ");
let currentYear = prompt("DIGITE O ANO ATUAL: ");

let bornDay = prompt("DIGITE O DIA E QUE NASCEU: ");
let bornMonth = prompt("DIGITE O MES E QUE NASCEU: ");
let bornYear = prompt("DIGITE O ANO E QUE NASCEU: ");

let diffYear = currentYear - bornYear;
let diffMonth = currentMonth - bornMonth;
let diffDay = currentDay - bornDay;

let totalDays = (diffYear * CONV_YEAR_DAY) + (diffMonth * CONV_MONTH_DAY) + diffDay;
alert(`VOCE POSSUI ${totalDays} DIAS DE VIDAS.`);

let totalWeeks = totalDays / CONV_WEEK_DAY;
alert(`VOCE POSSUI ${totalWeeks.toFixed(2)} SEMANAS DE VIDAS.`);

let totalMonths = totalDays / CONV_MONTH_DAY;
alert(`VOCE POSSUI ${totalMonths.toFixed(2)} MESES DE VIDAS.`);

let totalYears = totalDays / CONV_YEAR_DAY;
alert(`VOCE POSSUI ${totalYears.toFixed(2)} ANOS DE VIDAS.`);
