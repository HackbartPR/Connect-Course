document.addEventListener("DOMContentLoaded", ()=>{
    document.getElementById("button").addEventListener("click", verificarFormulario);
    document.getElementById("inputPeso").addEventListener("change", (e)=>{e.srcElement.style.borderColor = "gray"});
    document.getElementById("inputAltura").addEventListener("change", (e)=>{e.srcElement.style.borderColor = "gray"});
})

const verificarFormulario = ()=>{
    let inputPeso = document.getElementById("inputPeso");
    inputPeso.value == "" && (inputPeso.style.borderColor = "red");

    let inputAltura = document.getElementById("inputAltura");
    inputAltura.value == "" && (inputAltura.style.borderColor = "red");

    inputPeso != "" && inputAltura != "" && calcularIMC(inputPeso.value, inputAltura.value);
}

const calcularIMC = (peso, altura)=>{
    altura = altura / 100;
    let imc = peso / (altura * altura);

    messages(imc);
}

const messages = (imc)=>{
    let message = '';
    if (imc < 17) 
        message = `Muito abaixo do peso [${imc.toFixed(2)}]`;
    else if (imc > 17 && imc <= 18.49)
        message = `Abaixo do peso [${imc.toFixed(2)}]`;
    else if (imc >= 18.5 && imc <= 24.99)
        message = `Peso normal [${imc.toFixed(2)}]`;
    else if (imc >= 25 && imc <= 29.99)
        message = `Acima do peso [${imc.toFixed(2)}]`;
    else if (imc >= 30 && imc <= 34.99)
        message = `Obesidade I [${imc.toFixed(2)}]`;
    else 
        message = `Obesidade II [${imc.toFixed(2)}]`;

    showResult(message);    
}

const showResult = (message)=>{
    document.getElementById("wrapper-result").innerText = message;
}



