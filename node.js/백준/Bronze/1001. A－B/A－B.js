const readline = require('node:readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout,
});

rl.question('', input => {
    const[a, b] = input.trim().split(' ').map(Number);
    console.log(a-b);
    rl.close();
})