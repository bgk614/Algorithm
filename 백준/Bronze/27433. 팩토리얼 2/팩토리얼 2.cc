#include <iostream>
int main() {
    int N;
    long long int tmp = 1;
    
    scanf("%d", &N);
    for(int i=1; i<=N; i++) {
        tmp *= i;
    }   
    
    printf("%lld", tmp);
    return 0;
}