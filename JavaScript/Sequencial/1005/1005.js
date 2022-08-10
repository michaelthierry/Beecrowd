/**
 * Programa: 1005 - Media 1: 
 * Esse program recebe dois valores reais e faz calcula
 * a media sendo os peso 3.5  e 7.5 respectivamente
 */
/*Lendo do arquivo*/
var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');
/*Pegando os valores */
var primeiro_valor = Number.parseFloat(lines.shift());
var segundo_valor = Number.parseFloat(lines.shift());
/*Calculando a media */
var media = ((primeiro_valor * 3.5) + (segundo_valor * 7.5)) / 11.0;
/*Mostrando a media */
console.log("MEDIA = " + media.toFixed(5));