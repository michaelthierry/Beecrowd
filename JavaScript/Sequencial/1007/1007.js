/**
 * Programa: 1007 - Diferença:
 * Esse programa recebe quatro valores interios e calcula a diferenca 
 * de uma forma definida
 */
/*Lendo do arquivo*/
var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');
/*Lendo valores */
var valor_A = Number.parseInt(lines.shift());
var valor_B = Number.parseInt(lines.shift());
var valor_C = Number.parseInt(lines.shift());
var valor_D = Number.parseInt(lines.shift());
/*Calculando a diferença */
var diferenca = ((valor_A * valor_B) - (valor_C * valor_D));
/*Mostrando o resultado */
console.log("DIFERENCA = " + diferenca);