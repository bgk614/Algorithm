const readline = require('node:readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

const compareNum = (a, b) => {
    if (a > b) console.log('>');
    else if(a < b) console.log('<');
    else console.log('==');
}

rl.question('', input => {
  const [a, b] = input.trim().split(' ').map(Number);
  compareNum(a, b);
  rl.close();
});
