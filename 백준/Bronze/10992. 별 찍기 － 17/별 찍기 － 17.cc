#include <iostream>

int main() {
    int N;
    scanf("%d", &N);

    for(int i=1; i<N; i++) {
        for(int j=0; j<N-i; j++) {
            printf(" ");
        }
        printf("*");
        for(int j=0; j<2*i-3; j++) {
            printf(" ");
        }
        if(i > 1) printf("*");
        printf("\n");
    }

    for(int i=0; i<N*2-1; i++) {
        printf("*");
    }
    return 0;
}