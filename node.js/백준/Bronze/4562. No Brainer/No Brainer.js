const readline = require('node:readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

let t = 0;    
let count = 0;

rl.question('', n => {
  t = Number(n); 

  const brainNum = () => {
    if (count === t) {
      rl.close();
      return;
    }

    rl.question('', numbers => {
      const [a, b] = numbers.split(' ').map(Number);
      const str = (a < b) ? 'NO' : 'MMM';
      console.log(str + ' BRAINS');

      count++;
      brainNum();
    });
  };

  brainNum();
});