#include <iostream>
using namespace std;

int main() {
    int M, X, Y;
    cin >> M;

    int cup = 1;
    for(int i=0; i<M; i++) {
        cin >> X >> Y;
        if(cup == X) cup = Y;
        else if(cup == Y) cup = X;
    } 
    
    cout << cup;
    return 0;
}