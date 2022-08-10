/**
 * Programa: 1001 - Extremamente Básico: 
 * Esse programa soma o valor de duas pariaveis e mostra o resultados.
 */
/*Lendo do arquivo*/
var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');
//Convertendo os valores
var primeiro_valor = parseInt(lines.shift());
var segundo_valor = parseInt(lines.shift());
//Calculando 
var total = primeiro_valor + segundo_valor;
//Mostrando o resultado
console.log('X = %d', total);