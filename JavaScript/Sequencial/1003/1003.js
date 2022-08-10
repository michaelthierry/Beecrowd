/**
 * Programa: 1003 - Soma Simples: 
 * Esse programa recebe dois valores
 * Em seguida ele soma os dois valores e mostra o resultado
 */
/*Lendo do arquivo*/
var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');
//Pegando os valores
var valor_A = parseInt(lines.shift());
var valor_B = parseInt(lines.shift());
//Somando os valores
var soma = valor_A + valor_B;
//Mostrando o resultado
console.log('SOMA = '+soma);