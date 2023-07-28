#include <iostream>
#include <algorithm>
int main() {
    int arr[4];
    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
    std::sort(arr, arr+3);
    printf("%d", arr[1]);
    return 0;
}