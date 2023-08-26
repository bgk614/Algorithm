#include <iostream>

int main() {
    int MM, DD;
    scanf("%d %d", &MM, &DD);
    
    if(MM == 2 && DD == 18) printf("Special");
    else {
        if(MM < 2) printf("Before");
        else if(MM == 2) {
            if(DD < 18) printf("Before");
            else printf("After");
        }
        else printf("After");
    }
    return 0;
}