#include <iostream>
int main() {
    int N;
    scanf("%d", &N);

    for(int i=1; i<=N; i++) {
        for(int j=i; j<N; j++) {
            printf(" ");
        }
        printf("*");
        for(int j=0; j<i-1; j++) {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}