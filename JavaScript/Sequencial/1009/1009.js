/**
 * Programa: 1009 - Salario com Bonus:
 * Esse programa programa lê o no nome do funcionario, o salario atual do mesmo
 * e o valor da venda feita. A seguir faz o calculo do novo salrio acrescido de 
 * 15% da venda feita. Mostra na tela o novo salario.
 */
/*Lendo do arquivo*/
var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');
/*lendo os valores */
var nome_funcionario = String(lines.shift());
var salario_atual = Number.parseFloat(lines.shift());
var venda = Number.parseFloat(lines.shift());
/*Calculando o novo salario */
var novo_salario = salario_atual + (venda * 0.15);
/*Mostrando o resultado*/
console.log("TOTAL = R$ " + novo_salario.toFixed(2));