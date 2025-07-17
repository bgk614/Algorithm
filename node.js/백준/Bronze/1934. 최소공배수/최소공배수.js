var input = require('fs').readFileSync('/dev/stdin').toString().split('\n');
var t = parseInt(input[0])

const gcd = (a, b) => {
  while(b > 0) {
    let r = a % b;
    a = b;
    b = r; 
  }
  return a;
}

for (let i = 1; i <= t; i++) {
  const [a, b] = input[i].split(' ').map(Number);
  console.log(a * b / gcd(a, b));
}
