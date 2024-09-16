document.addEventListener('DOMContentLoaded', () => {
    const num1Input = document.getElementById('num1');
    const num2Input = document.getElementById('num2');
    const operationSelect = document.getElementById('operation');
    const calculateButton = document.getElementById('calculate');
    const resultDiv = document.getElementById('result');

    calculateButton.addEventListener('click', () => {
        const num1 = parseFloat(num1Input.value);
        const num2 = parseFloat(num2Input.value);
        const operation = operationSelect.value;

        if (isNaN(num1) || isNaN(num2)) {
            resultDiv.textContent = 'Por favor, insira números válidos.';
            return;
        }

        let result;
        switch (operation) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                if (num2 === 0) {
                    resultDiv.textContent = 'Não é possível dividir por zero.';
                    return;
                }
                result = num1 / num2;
                break;
            default:
                resultDiv.textContent = 'Operação inválida.';
                return;
        }

        resultDiv.textContent = `Resultado: ${result}`;
    });
});
