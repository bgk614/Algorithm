#include <iostream>

int main() {
    int N, P;
    scanf("%d %d", &N, &P);
    int price = P;

    if(5 <= N && N < 10) {
        price = P - 500;
    } 
    else if(5 <= N && N < 15) {
        if(P - 500 > P - P/10) price = P - P/10;
        else price = P - 500;
    }
    else if(10 <= N && N < 20) {
        if(P - 2000 > P - P/10) price = P - P/10;
        else price = P - 2000;
    }
    else if(20 <= N) {
        if(P - 2000 > P - P/4) price = P - P/4;
        else price = P - 2000;
    }

    if(price < 0) price = 0;

    printf("%d", price);
}