/**
 * Programa: 1010 - Calculo simples:
 * Esse programa ler o codigo, numero e valor de duas peças. A seguir ele 
 * devolve o valor total a ser pago.
 */
/*Lendo do arquivo*/
var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');
/*Lendo peças */
var peca1 = lines.shift().split(' ');
var peca2 = lines.shift().split(' ');
/*lendo quantidades */
var quantidade_peca1 = Number.parseInt(peca1[peca1.length - 2]);
var quantidade_peca2 = Number.parseInt(peca2[peca2.length - 2]);
/* lendo valores*/
var preco_peca1 = Number.parseFloat(peca1[peca1.length - 1]);
var preco_peca2 = Number.parseFloat(peca2[peca2.length - 1]);
/*Calculando o preco */
var preco = (quantidade_peca1 * preco_peca1) + (quantidade_peca2 * preco_peca2);
/*Mostrando o resultado */
console.log("VALOR A PAGAR: R$ " + preco.toFixed(2));