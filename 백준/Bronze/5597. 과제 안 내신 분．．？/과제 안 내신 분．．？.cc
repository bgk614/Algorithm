#include <iostream>
using namespace std;
int main() {
    int num[31] = {0,};
    int n;
    for(int i=0; i<28; i++) {
        cin>> n;
        num[n] = 1;
    }
    for(int i=1; i<31; i++) {
        if(num[i] == 0) cout<< i <<'\n';
    }
}