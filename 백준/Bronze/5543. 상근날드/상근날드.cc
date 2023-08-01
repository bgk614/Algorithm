#include <iostream>
int main() {
    int price, tmp, burger = 0, drink = 0;

    for(int i=0; i<3; i++) {
        scanf("%d", &tmp);
        if(burger == 0) burger = tmp;
        else if(burger > tmp) burger = tmp;
    }

    for(int i=0; i<2; i++) {
        scanf("%d", &tmp);
        if(drink == 0) drink = tmp;
        else if(drink > tmp) drink = tmp;
    }

    price = burger + drink - 50;

    printf("%d", price);
    return 0;
}