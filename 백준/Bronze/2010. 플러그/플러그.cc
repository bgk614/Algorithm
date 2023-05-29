#include <iostream>
using namespace std;
int main() {
    int n;
    int plug;
    int max = 0;
    cin>> n;
    for(int i=0; i<n; i++) {
        cin>> plug;
        max += plug;
    }
    cout<< max - (n-1);
}