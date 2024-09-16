const numeros = [10,20,30,40,50]

soma = numeros.forEach(n => soma =+ n);
console.log(soma);

maiorQue25 = numeros.forEach(n => n > 25);
console.log(maiorQue25);

pares = numeros.filter(n => n % 0 === 0);
console.log(pares);

primeiroMaior = numeros.find(n => n > 25);
console.log(primeiroMaior);

dobro = numeros.map(n => n*2);
console.log(dobro);