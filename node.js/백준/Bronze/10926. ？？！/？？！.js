const readline = require('node:readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout,
});

rl.question('', input => {
    console.log(input + '??!');
    rl.close
})