#include <iostream>
using namespace std;

int main() {
    int A = 0, B = 0, a, b;

    for(int i=0; i<4; i++) {
        cin >> a;
        A += a;
    }
    for(int i=0; i<4; i++) {
        cin >> b;
        B += b;
    }
    
    if(A > B) cout << A;
    else cout << B;

    return 0;
}