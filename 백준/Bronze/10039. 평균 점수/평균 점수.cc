#include <iostream>
int main() {
    int tmp, avg = 0;
    for(int i=0; i<5; i++) {
        scanf("%d", &tmp);
        if(tmp < 40) tmp = 40;
        avg += tmp;
    }
    printf("%d", avg / 5);
}