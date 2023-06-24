#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int star = 1;
    for(int i=1; i<N+1; i++) {
        for(int j=0; j<N-i; j++) {
            cout << " ";
        }
        for(int k=0; k<star; k++) {
            cout << "*";
        }
        star += 2;
        cout << '\n';
    }
    return 0;
}