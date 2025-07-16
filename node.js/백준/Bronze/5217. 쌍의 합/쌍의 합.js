function solve() {
    const readline = require('readline');
    const rl = readline.createInterface({
        input: process.stdin,
        output: process.stdout
    });

    let input = [];
    rl.on('line', (line) => {
        input.push(parseInt(line));
    }).on('close', () => {
        const T = input.shift(); // 첫 번째 줄은 테스트 케이스의 수

        for (let i = 0; i < T; i++) {
            const n = input[i];
            const pairs = [];

            // 1부터 n/2까지 반복하여 쌍을 찾습니다.
            // 첫 번째 수가 두 번째 수보다 작아야 하므로 i < n - i 조건을 만족합니다.
            // 두 수가 달라야 하므로 i !== n - i 조건을 만족합니다.
            for (let j = 1; j <= Math.floor((n - 1) / 2); j++) {
                const k = n - j;
                if (j < k) { // 첫 번째 수가 두 번째 수보다 작아야 합니다.
                    pairs.push(`${j} ${k}`);
                }
            }

            let result = `Pairs for ${n}:`;
            if (pairs.length > 0) {
                result += ` ${pairs.join(', ')}`;
            }
            console.log(result);
        }
    });
}

solve();