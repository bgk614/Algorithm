const fs = require('fs');
const input = fs.readFileSync('/dev/stdin', 'utf8').trim().split('\n');

const t = Number(input[0]);

for (let i = 1; i <= t; i++) {
    const n = Number(input[i]);
    let pairs = [];
    
    // i는 1부터 시작하고, i < n-i 조건으로 중복과 같은 수 방지
    for (let j = 1; j < n - j; j++) {
        pairs.push(`${j} ${n - j}`);
    }
    
    if (pairs.length === 0) {
        console.log(`Pairs for ${n}:`);
    } else {
        console.log(`Pairs for ${n}: ${pairs.join(', ')}`);
    }
}