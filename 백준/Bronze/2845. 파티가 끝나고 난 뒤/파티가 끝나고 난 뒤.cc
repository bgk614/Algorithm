#include <iostream>

int main() {    
    int L, P, tmp;
    scanf("%d %d", &L, &P);
    for(int i=0; i<5; i++) {
        scanf("%d", &tmp);
        printf("%d ", tmp - L * P);
    }
    return 0;
}