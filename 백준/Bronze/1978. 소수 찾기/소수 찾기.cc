#include <iostream>
using namespace std;
int main(){
    int n, tmp;
    int count = 0;
    cin>> n;
    for(int i=0; i<n; i++){
        cin>> tmp;
        if(tmp == 1) continue;
        if(tmp == 2) count++;
        for(int j=2; j<tmp; j++){
            if(tmp % j == 0)break;
            if(j==tmp-1) count++;
        }
    }
    cout<< count;
}