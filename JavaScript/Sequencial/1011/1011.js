/**
 * Programa: 1010 - Esfera
 * Esse programa recebe um valor que corresponte ao raio 
 * de uma esfera. A seguir ele calcula o volume da esfera e mostra ao usuario
 */
/*Lendo do arquivo*/
var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');
/*Lendo o valor */
var raio = Number.parseInt(lines.shift());
/*defindindo variveis */
const PI = 3.14159;
/*Calculando o volume */
var volume = ((4.0 / 3.0) * PI * Math.pow(raio, 3));
/*Mostrando o resultado */
console.log("VOLUME = " + volume.toFixed(3));