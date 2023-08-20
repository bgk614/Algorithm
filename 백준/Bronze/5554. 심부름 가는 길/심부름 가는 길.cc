#include <iostream>

int main() {    
    int x, y = 0, tmp;

    for(int i=0; i<4; i++) {
        scanf("%d", &tmp);
        y += tmp;
    }

    x = y / 60;
    y %= 60;

    printf("%d\n%d", x, y);
    return 0;
}