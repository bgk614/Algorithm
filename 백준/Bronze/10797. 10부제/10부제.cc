#include <iostream>
int main() {
    int day, num, car = 0;
    scanf("%d", &day);

    for(int i=0; i<5; i++) {
        scanf("%d", &num);
        if(day % 10 == num) car++;
    }

    printf("%d", car);
    return 0;
}