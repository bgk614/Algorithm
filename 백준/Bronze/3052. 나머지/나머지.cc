#include <iostream>
using namespace std;
int main(){
    int a, num;
    int sum = 0;
    int arr[42] = {0, };
    for(int i=0; i<10; i++){
        cin>> a;
        num = a % 42;
        if(arr[num] == 0){
            arr[num]++;
            sum++;
        }
    }
    cout<< sum;
}