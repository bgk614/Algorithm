#include <iostream>

int main() {
    int n, k;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &k);
        for(int i=0; i<k; i++) {
            printf("=");
        }
        printf("\n");
    }
    return 0;
}