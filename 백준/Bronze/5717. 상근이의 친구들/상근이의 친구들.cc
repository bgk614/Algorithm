#include <iostream>
using namespace std;

int main() {
    int M, F;
    while(1){
        cin >> M >> F;
        if(M + F == 0) break;
        cout<< M+F <<'\n';
    }
    return 0;
}