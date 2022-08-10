/**
 * Programa: 1006 - Media 2: 
 * Esse program recebe três valores reais e faz o calculo da 
 * media sendo os peso 2, 3 e 5 respectivamente.
 */
/*Lendo do arquivo*/
var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');
/*Lendo os valores */
var valor_A = Number.parseFloat(lines.shift());
var valor_B = Number.parseFloat(lines.shift());
var valor_C = Number.parseFloat(lines.shift());
/*Calculando a media */
var media = ((valor_A * 2.0) + (valor_B * 3.0) + (valor_C * 5.0)) / 10.0;
/*Mostra o resultado */
console.log("MEDIA = " + media.toFixed(1));