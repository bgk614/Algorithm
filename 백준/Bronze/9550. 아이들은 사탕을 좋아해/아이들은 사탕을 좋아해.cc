#include <iostream>

int main() {
    int T, N, K, tmp, max;
    scanf("%d", &T);

    for(int i=0; i<T; i++) {
        max = 0;
        scanf("%d %d", &N, &K);

        for(int j=0; j<N; j++) {
            scanf("%d", &tmp);
            max += tmp / K;
        }

        printf("%d\n", max);
    }
    return 0;
}