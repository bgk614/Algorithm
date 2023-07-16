#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[4];
    cin >> arr[0] >> arr[1] >> arr[2];

    sort(arr, arr+3);

    int max = arr[1] - arr[0];
    if(max < arr[2] - arr[1]) max = arr[2] - arr[1];

    cout << max-1;
}