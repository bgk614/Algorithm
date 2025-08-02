function solution(score) {
    var answer = [];
    const tmp = score.map(([eng, math]) => (eng + math) / 2);
    const sortTmp = [...tmp].sort((a, b) => b - a);
    answer = tmp.map(avg => sortTmp.indexOf(avg) + 1);
    return answer;
}