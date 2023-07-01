#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int star = N*2-1;

    for(int i=N; i>0; i--) {
        for(int j=i; j<N; j++) {
            cout << " ";
        }
        for(int j=0; j<star; j++) {
            cout << "*";
        }
        star -= 2;
        cout << '\n';
    }
    return 0;
}