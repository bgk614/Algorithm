function solution(n) {
    var answer = 0;
    let tmp = 0;
    let a = 0;
    let b = 1;
    
    for (let i = 1; i < n; i++) {
        tmp = (a + b) % 1234567;
        a = b;
        b = tmp;
    }
    answer = b;
    
    return answer;
}