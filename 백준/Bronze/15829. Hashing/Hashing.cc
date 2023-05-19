#include <iostream>
using namespace std;
int main(){
    int l;
    cin>> l;
    char arr[l];
    int a = 0;
    int r = 1;
    for(int i=0; i<l; i++){
        cin>> arr[i];
        a += (arr[i] - 'a' + 1) * r;
        r *= 31;
    }
    cout<< a;
    return 0;
}