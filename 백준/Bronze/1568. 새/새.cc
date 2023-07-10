#include <iostream>
using namespace std;

int main() {
    int N, K = 1, second = 0;
    cin >> N;

    N -= K;
    second++;

    while(N > 0) {
        K++;
        if(N < K) K = 1;
        N -= K;
        second++;
        if(N <= 0) break;
    }
    
    cout << second;
    return 0;
}