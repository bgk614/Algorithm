#include <iostream>
using namespace std;

int main() {
    int number = 10000;
    int arr[10036];

    for(int i=1; i<=number; i++) {
        arr[i] = i;
    }

    int num;
    for(int i=1; i<=number; i++) {
        num = i;
        num += i % 10 / 1;
        num += i % 100 / 10;
        num += i % 1000 / 100;
        num += i % 10000 / 1000;

        arr[num] = 0;
    }

    for(int i=1; i<=number; i++) {
        if(arr[i] != 0) printf("%d\n", arr[i]);
    }

    return 0;
}