#include <iostream>
int main() {
    int K, N, M, tmp;
    scanf("%d %d %d", &K, &N, &M);
    tmp = M - K * N;

    if(tmp < 0) tmp *= -1;
    else if(0 < tmp) tmp = 0;

    printf("%d", tmp);
    return 0;
}