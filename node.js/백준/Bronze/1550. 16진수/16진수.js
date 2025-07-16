const readline = require('node:readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question('', num => {
  console.log(`${parseInt(num, 16)}`);
  rl.close();
});