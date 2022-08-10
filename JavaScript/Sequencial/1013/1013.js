/**
 * Programa 1013 - O Maior
 * Esse programa recebe tres valores. Em seguida diz qual deles é o maior valor
 */
/*Lendo do arquivo*/
var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');
/*Lendo valores */
var valores = lines.shift().split(' ');
var valor_A = Number.parseInt(valores[0]);
var valor_B = Number.parseInt(valores[1]);
var valor_C = Number.parseInt(valores[2]);
/*Calculando o maior*/
var maior = (valor_A + valor_B + Math.abs(valor_A - valor_B)) / 2;
maior = (maior + valor_C + Math.abs(maior - valor_C)) / 2;
/*Mostrando o maior */
console.log(`${maior} eh o maior`);