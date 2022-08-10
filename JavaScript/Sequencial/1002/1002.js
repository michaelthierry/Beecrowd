/**
 * Programa: 1002 - Area do Circulo: 
 * Esse programa recebe um valor que corresponde ao raio de um circulo
 * Em seguida ele cacula a area do circulo e de mostra o resultado 
 */
/*Lendo do arquivo*/
var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');
//Constante PI
const PI = 3.14159;
//Lendo os valores
var raio = parseFloat(lines.shift());
//Calculando a area
var area = parseFloat(PI * (raio * raio));
//Mostrando o resultado 
console.log('A=' + area.toFixed(4));
