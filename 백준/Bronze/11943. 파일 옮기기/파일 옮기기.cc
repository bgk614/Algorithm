#include <iostream>

int main() {        
    int A, B, C, D;
    scanf("%d %d %d %d", &A, &B, &C, &D);
    if(A + D > B + C) printf("%d", B + C);
    else printf("%d", A + D);
    return 0;
}