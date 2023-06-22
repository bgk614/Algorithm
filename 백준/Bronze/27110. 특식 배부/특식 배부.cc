#include <iostream>
using namespace std;

int main() {
    int N;
    cin>> N;

    int arr[3];
    int MAX = 0;

    for(int i=0; i<3; i++) {
        cin>> arr[i];
    }
    for(int i=0; i<3; i++) {
        if(arr[i] > N) {
            MAX += N;
        }
        else {
            MAX += arr[i];
        }
    }

    cout<< MAX;
    return 0;
}