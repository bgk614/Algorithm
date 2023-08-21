#include <iostream>

int main() {    
    int L, A, B, C, D, korean, math;
    scanf("%d %d %d %d %d", &L, &A, &B, &C, &D);

    if(A % C != 0) korean = A / C + 1;
    else korean = A / C;

    if(B % D != 0)math = B / D + 1;
    else math = B / D;

    if(korean < math) L -= math;
    else L -= korean;

    printf("%d", L);
    return 0;
}