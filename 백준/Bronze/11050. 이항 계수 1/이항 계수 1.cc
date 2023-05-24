#include <iostream>
using namespace std;
int factorial(int num){
    if(num == 0) return 1;
    int tmp = 1;
    for(int i=num; i>=1; i--){
        tmp *= i;
    }
    return tmp;
}
int main(){
        int N, K;
        cin>> N >> K;
        cout<< factorial(N) / (factorial(K) * factorial(N-K));
        return 0;
}