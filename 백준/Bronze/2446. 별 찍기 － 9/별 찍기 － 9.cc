#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

   for(int i=0; i<N-1; i++) {
        for(int j=0; j<i; j++) {
            cout<<" ";
        }
        for(int j=i; j<N*2-1-i; j++) {
            cout<< "*";
        }
        cout<<'\n';
    } 
    for(int i=1; i<N+1; i++) {
        for(int j=N-i; j>0; j--) {
            cout<<" ";
        }
        for(int j=0; j<i*2-1; j++) {
            cout<< "*";
        }
        cout<<'\n';
    }
    return 0;
}