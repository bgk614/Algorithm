const input = require('fs').readFileSync('/dev/stdin').toString().split('\n');

const N = parseInt(input[0])
const examinee = (input[1].split(" ").map(Number));
const [a, b] = input[2].split(" ").map(Number);

let result = 0;

for (let i = 0; i < N; i++) {
  result++;
  const tmp = (examinee[i] - a);
  
  if (tmp > 0) {
    result += Math.ceil(tmp / b);
  }
}

console.log(result);