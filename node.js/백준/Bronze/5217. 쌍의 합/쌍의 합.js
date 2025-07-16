const fs = require('fs');
const input = fs.readFileSync('/dev/stdin', 'utf8').trim().split('\n');
const t = Number(input[0]);

for (let i = 1; i <= t; i++) {
    const n = Number(input[i]);
    let pairs = [];

    for (let j = 1; j < n - j; j++) {
        pairs.push(`${j} ${n - j}`);
    }
    
    if (pairs.length === 0) {
        console.log(`Pairs for ${n}:`);
    } else {
        console.log(`Pairs for ${n}: ${pairs.join(', ')}`);
    }
}