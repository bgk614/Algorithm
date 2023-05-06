#include <iostream>
using namespace std;
int main(){
    int n, num = 0;
    for(int i=0; i<5; i++){
        cin>> n;
        num += n*n%10;
    }
    cout<< num%10;
}