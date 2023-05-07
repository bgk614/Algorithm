#include <iostream>
using namespace std;
int main(){
    int n, num = 1;
    int number[10] = {0, };
    for(int i=0; i<3; i++){
        cin>> n;
        num *= n;
    }
    while(num != 0){
        n = num%10;
        number[n]++;
        num /= 10;
    }
    for(int i=0; i<10; i++){
        cout<< number[i] <<'\n';
    }
    return 0;
}