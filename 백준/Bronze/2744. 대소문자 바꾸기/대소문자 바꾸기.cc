#include <iostream>
using namespace std;
int main(){
    char tmp[101];
    cin>> tmp;
    for(int i=0; i< 101; i++){
        if(!tmp[i]) break;
        if(tmp[i] < 'a') tmp[i] += 32;
        else tmp[i] -= 32;
    }
    cout<< tmp;
}