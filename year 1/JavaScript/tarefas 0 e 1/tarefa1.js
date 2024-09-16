function ex3(price){
    return price*0.1 + price;
}

function ex4(nota1,nota2, nota3){
    return (nota1 + nota2 + nota3) / 3;
}

function ex5(num1, num2){
    if(num1 == num2){
        alert("igual");
    }else{
        if(num1 > num2){
            alert(num1);
        }else{
            alert(num2);
        }
    }
}

function ex6(num1, num2, num3){
    let numMaior, numMenor;
    if(num1 > num2 && num1 > num3){
        numMaior = num1;
        if(num2 > num3){
            numMenor = num3;
        }else{
            numMenor = num2;
        }
    }else if(num2 > num1 && num2 > num3){
        if(num1 > num3){
            numMenor = num3;
        }else{
            numMenor = num1;
        }
    }else{
        if(num1 > num2){
            numMenor = num2;
        }else{
            numMenor = num1;
        }
    }
}

function ex7(num){
    if(num % 7 == 0){
        alert("É multiplo");
    }else{
        alert("Não é multiplo");
    }
}

function ex8(num){
    if(num > 17 && num < 68){
        alert("Pode doar sangue");
    }else{
        alert("Não pode doar sangue");
    }
}

function ex9(){
    for(let i = 0; i < 201; i++){
        alert(i);
    }
}

function ex10(){
    for(let i = 0; i < 21; i++){
        if(i % 2 != 0){
            alert(i);
        }
    }
}

function ex11(){
    let soma;
    for(let i = 0; i < 101; i++){
        soma += i;
    }
    return soma;
}