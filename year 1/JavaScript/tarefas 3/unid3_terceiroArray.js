function busca(str, callback){
    for(let i = 0; i < str.length; i++){
        if(callback(str[i])) return array[i];
        else return undefined;
    }
}

function Par(num){
    return num % 2 == 0;
}

resultado = busca(numeros, Par);
console.log(resultado);