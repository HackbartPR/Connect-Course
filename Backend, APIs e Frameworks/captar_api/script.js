let array = []

const api = async ()=> {
    await fetch("http://10.200.70.241:5555/old")
    .then(resp =>{
        return resp.json()
    })
    .then(data =>{
        array = data
    })
}











