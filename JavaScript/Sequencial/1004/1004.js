/**
 * Programa: 1004 - Prduto Simples: 
 * Esse programa recebe dois valores
 * Em seguida ele faz o protuto dos dois valores e mostra o resultado
 */
/*Lendo do arquivo*/
var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');
/*pegando os valores */
var primerio_valor = Number.parseInt(lines.shift());
var segundo_valor = Number.parseInt(lines.shift());
/*Fazendo o produto */
var produto = primerio_valor * segundo_valor;
/*Mostrando o resultado */
console.log("PROD = "+ produto);