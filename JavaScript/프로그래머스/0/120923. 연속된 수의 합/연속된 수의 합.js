function solution(num, total) {
    var answer = [];
    
    for (let i = 0; i < num; i++) {
        answer[i] = (Math.round(total / num) - Math.floor(num / 2)) + i;
    }
    
    return answer;
}