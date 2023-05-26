#include <iostream>
using namespace std;
int main() {
    int n;
    int tmp=1;
    cin>> n;
    for(int i=n; i>0; i--) {
        tmp *= i;
    }
    cout<< tmp;
}