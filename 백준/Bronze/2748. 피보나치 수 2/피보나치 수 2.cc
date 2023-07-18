#include <iostream>
using namespace std;

int main() {
    long long int A = 0, B = 1, tmp;
    int N;
    cin >> N;
    if(N == 0) cout << "0";
    else if(N == 1) cout << "1";
    else{
        for(int i=0; i<N-1; i++) {
            tmp = A + B;
            A = B;
            B = tmp;
        }
        cout << tmp;
    }
    return 0;
}