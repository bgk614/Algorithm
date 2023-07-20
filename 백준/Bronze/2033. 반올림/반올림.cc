#include <iostream>

int main() {
    int N, tmp = 10;
    scanf("%d", &N);
    
    while(N > tmp) {
        if(N % tmp >= tmp/2) {
            N -= (N % tmp);
            N += tmp;
        }
        else N -= (N % tmp);

        tmp *= 10;
    }

    printf("%d", N);
    return 0;
}