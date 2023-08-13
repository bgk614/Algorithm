#include <iostream>
#include <algorithm>

int main() {
    int arr[5], sum = 0;
    
    for(int i=0; i<5; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    std::sort(arr, arr+5);

    printf("%d\n%d", sum/5, arr[2]);
    return 0;
}