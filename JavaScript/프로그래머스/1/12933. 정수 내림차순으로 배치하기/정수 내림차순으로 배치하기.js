function solution(n) {
    var answer = n.toString().split('').map(Number);
    answer.sort((a, b) => b - a);
    answer = Number(answer.join(''));
    return answer;
}