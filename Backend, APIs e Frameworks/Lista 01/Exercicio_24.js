const SALARY = 1200.00
const FINE = 0.02
const FIRST_BILL = 200.00
const SECOND_BILL = 120.00

let firstFine = FIRST_BILL * (1 + FINE);
let secondFine = SECOND_BILL * (1 + FINE);

let totalFine = firstFine + secondFine;
let newSalary = SALARY - totalFine;

alert(`NOVO SALARIO SERA DE R$${newSalary}, JA EXCLUSO O VALOR A PAGAR DE R$${totalFine} DE MULTAS.`);


