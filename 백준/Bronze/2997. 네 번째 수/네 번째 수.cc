#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[3] = {0, };
    for(int i=0; i<3; i++) {
        cin >> arr[i];
    }

    sort(arr, arr+3);

    int a = arr[1] - arr[0];
    int b = arr[2] - arr[1];

    if(a == b) cout << arr[2] + a;
    else if(a > b) cout << arr[0] + b;
    else cout << arr[1] + a; 
 
    return 0;
}