#include <iostream>
using namespace std;

int main() {
    int arr[101] = {0, };
    int N, num, refuse = 0;
    cin >> N;

    for(int i=0; i<N; i++) {
        cin >> num;
        if(arr[num] == 0) arr[num]++;
        else refuse++;
    }

    cout << refuse;
    return 0;
}