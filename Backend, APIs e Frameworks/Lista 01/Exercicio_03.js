const NORMAL_HOUR_VALUE = 10
const EXTRA_HOUR_VALUE = 15
const MAXIMUM_HOUR_BY_MONTH = 220
const SUBT_TAXES = 0.9

let hourWorked = 0;
hourWorked = prompt("DIGITE A QUANTIDADE DE HORAS TRABALHADAS NO MES: ");

let extraHourWorked = 0;
hourWorked > 220 && (extraHourWorked = hourWorked - MAXIMUM_HOUR_BY_MONTH);

let normalValueToReceive = (hourWorked - extraHourWorked) * NORMAL_HOUR_VALUE;
let extraValueToReceive = extraHourWorked * EXTRA_HOUR_VALUE;

let grossSalary =  normalValueToReceive + extraValueToReceive;
let netSalary = grossSalary * SUBT_TAXES;

alert(`VOCE TRABALHOU ${hourWorked} HORA(S) NO MES, SENDO ${extraHourWorked} HORA(S) EXTRA(S)`);
alert(`SALARIO BRUTO: R$${grossSalary}, SENDO R$${normalValueToReceive} HORAS NORMAIS + R$${extraValueToReceive} HORAS EXTRAS`);
alert(`SALARIO LIQUIDO: R$${netSalary}`);