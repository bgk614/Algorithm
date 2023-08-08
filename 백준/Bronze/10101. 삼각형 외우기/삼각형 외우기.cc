#include <iostream>
#include <algorithm>

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    if(A + B + C != 180) printf("Error");
    else if(A == 60 && B == 60 && C == 60) printf("Equilateral");
    else if(A == B || A == C || B == C) printf("Isosceles"); 
    else printf("Scalene");

    return 0;
}