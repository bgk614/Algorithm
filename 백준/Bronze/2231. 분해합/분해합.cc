#include <iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    for(int i=0; i<n; i++){
        int m = i;
        int num = 10;
        for(int j=0; j<7; j++){
            m += i % num / (num / 10);
            num *= 10;
        }
        if(m==n){
            cout<< i;
            break;
        }else if(m!=n && i==n-1){
            cout<< "0";
        }
    }
    return 0;
}