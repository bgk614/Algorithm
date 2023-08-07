#include <iostream>
#include <algorithm>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N+1];

    for(int i=0; i<N; i++) {
        scanf("%d", &arr[i]);
    }

    std::sort(arr, arr+N);

    for(int i=0; i<N; i++) {
        printf("%d\n", arr[i]);
    }
    
    return 0;
}