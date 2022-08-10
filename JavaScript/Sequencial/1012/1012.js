/**
 * Programa: 1012 - Area
 * Esse programa recebe tres valores reais. A seguir ele calcula o area de 5 figuras geométricas, sendo elas:
 * TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO
 */
/*Lendo do arquivo*/
var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');
/*Declarando variaveis uteis */
const PI = 3.14159;
/*Lendo os valores*/
var valores = lines.shift().split(' ');
var valor_A = Number.parseFloat(valores[0]);
var valor_B = Number.parseFloat(valores[1]);
var valor_C = Number.parseFloat(valores[2]);
/*Calculando areas */
var triangulo = (valor_A * valor_C) / 2.0;
var circulo = (PI * Math.pow(valor_C, 2));
var trapezio = ((valor_A + valor_B) * valor_C) / 2.0;
var quadrado = Math.pow(valor_B, 2);
var retangulo = valor_A * valor_B;
/*Mostrando resultados */
console.log('TRIANGULO: ' + triangulo.toFixed(3));
console.log('CIRCULO: ' + circulo.toFixed(3));
console.log('TRAPEZIO: ' + trapezio.toFixed(3));
console.log('QUADRADO: ' + quadrado.toFixed(3));
console.log('RETANGULO: ' + retangulo.toFixed(3));