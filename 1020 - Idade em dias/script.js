const fs = require('fs');

// Altere o caminho do arquivo para o seu arquivo de entrada desejado
const inputFile = 'input.txt';

const input = fs.readFileSync(inputFile, 'utf8');
const lines = input.split('\n');

var dias = 0;
dias = Number(lines.shift());

var ano = parseInt(dias/365);
dias -= ano*365;
var meses = parseInt(dias/30);
dias -= parseInt(meses*30);

console.log(ano + " ano(s)");
console.log(meses + " mes(es)");
console.log(dias + " dia(s)");
