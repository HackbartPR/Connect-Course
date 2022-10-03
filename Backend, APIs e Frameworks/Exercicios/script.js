var users = new Array();

document.addEventListener("DOMContentLoaded", ()=>{
    document.getElementById("button").addEventListener("click", verificarFormulario);
    document.getElementById("inputPeso").addEventListener("change", (e)=>{e.srcElement.style.borderColor = "gray"});
    document.getElementById("inputAltura").addEventListener("change", (e)=>{e.srcElement.style.borderColor = "gray"});
    document.getElementById("inputNome").addEventListener("change", (e)=>{e.srcElement.style.borderColor = "gray"});
    document.getElementById("reiniciar").addEventListener("click", limparFormulario);
})

const verificarFormulario = ()=>{
    let inputPeso = document.getElementById("inputPeso");
    inputPeso.value == "" && (inputPeso.style.borderColor = "red");

    let inputAltura = document.getElementById("inputAltura");
    inputAltura.value == "" && (inputAltura.style.borderColor = "red");

    let inputNome = document.getElementById("inputNome");
    inputNome.value == "" && (inputNome.style.borderColor = "red");

    if(inputPeso != "" && inputAltura != "" && inputNome != ""){
        calcularIMC(inputPeso.value, inputAltura.value, inputNome.value);
        document.getElementById("reiniciar").classList.add("show")
        
    }

}

const calcularIMC = (peso, altura, nome)=>{
    altura = altura / 100;
    let imc = peso / (altura * altura);

    messages(imc);
    saveUser(peso, altura, nome, imc);
}

const saveUser = (peso, altura, nome, imc)=>{
    users.push({nome, peso, altura, imc});

    const wrapper = document.getElementById("wrapper");

    const divPai = document.createElement("div");
    
    const divFilho1 = document.createElement("div");
    divFilho1.innerText = nome;

    const divFilho2 = document.createElement("div");
    divFilho2.innerText = peso;

    const divFilho3 = document.createElement("div");
    divFilho3.innerText = altura.toFixed(2);

    const divFilho4 = document.createElement("div");
    divFilho4.innerText = imc.toFixed(2);

    divPai.appendChild(divFilho1);
    divPai.appendChild(divFilho2);
    divPai.appendChild(divFilho3);
    divPai.appendChild(divFilho4);

    divPai.classList.add("wrapper-reg-data");
    wrapper.appendChild(divPai);
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

const limparFormulario = ()=>{
    document.getElementById("inputNome").value = '';
    document.getElementById("inputPeso").value = '';
    document.getElementById("inputAltura").value = '';
    document.getElementById("reiniciar").classList.remove("show");
    document.getElementById("wrapper-result").innerText = "";
}



