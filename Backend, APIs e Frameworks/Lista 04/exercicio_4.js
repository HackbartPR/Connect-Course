const idososVivos = (idosos)=>{
    let newIdosos = idosos.filter((idoso)=>{
        return idoso.vivo === true
    })     
    console.log(newIdosos)
}

const idososMortos = (idosos)=>{
    let newIdosos = idosos.filter((idoso)=>{
        return idoso.vivo === false
    })     
    console.log(newIdosos)
}

const idososJovens = (idosos)=>{
    let newIdosos = idosos.filter((idoso)=>{
        return idoso.vivo === true && idoso.idade < 60
    })     
    console.log(newIdosos)
}
