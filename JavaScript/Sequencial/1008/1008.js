/**
 * Programa: 1008 - Salario:
 * Esse program recebe tres valores, sendo: o numero do funcionario,
 * as horas trabalhadas e o valor da hora trabalhada.
 * A seguir ele calcula o salario e mostra o numero do funcionario e o salario calculado
 */
/*Lendo do arquivo*/
var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');
/*Lendo os valores */
var numero_funcionario = Number.parseInt(lines.shift());
var horas_trabalhadas = Number.parseInt(lines.shift());
var valor_hora = Number.parseFloat(lines.shift());
/*Calculando o salario */
var salario = horas_trabalhadas * valor_hora;
/*Mostrando o resultado */
console.log("NUMBER = " + numero_funcionario);
console.log("SALARY = U$ " + salario.toFixed(2));