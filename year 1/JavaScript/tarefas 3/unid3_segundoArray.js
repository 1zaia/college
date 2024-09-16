const animais = ["gatos", "cachorro", "elefante", "rato", "leao"];

animals = animais.forEach(name => animais);
console.log(animals);

mais5 = animais.filter(n => n > 5);
console.log(mais5);

primeiroMais6 = animais.find(n => n > 6);
console.log(primeiroMais6);

animaisMaius = animais.forEach(animais => animais.toUpperCase());
console.log(animaisMaius);