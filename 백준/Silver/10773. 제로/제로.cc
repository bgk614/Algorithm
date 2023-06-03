#include <iostream>
using namespace std;
int main() {
    int k;
    int sum = 0;
    int j=0;

    cin>> k;
    int arr[k];
    
    for(int i=0; i<k; i++) {
        int tmp;
        cin>> tmp;
        if (tmp == 0) {
            arr[j] = 0;
            j--;
        }else {
            arr[j] = tmp;
            j++;
        } 
    }
    
    for(int i=0;i<j; i++) {
        sum += arr[i];
    }
    cout<< sum;
}