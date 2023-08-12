#include <iostream>

int main() {
    int A, B, C, BEP;
    scanf("%d %d %d", &A, &B, &C);

    if(B >= C)
        BEP = -1;
    else
        BEP = A / (C - B) + 1;

    printf("%d", BEP);
}