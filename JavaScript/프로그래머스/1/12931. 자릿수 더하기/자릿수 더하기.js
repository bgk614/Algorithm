function solution(n)
{
    var answer = 0;
    let tmp = n.toString().split('');
    
    for (let i of tmp) {
        answer += Number(i);
    }
    
    return answer;
}