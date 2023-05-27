#include <iostream>
#include <string>
using namespace std;
int main() {
    long long int i, j, sum = 0;
    string a, b;
    cin>> a >> b;
    for(i=0; i<a.length(); i++) {
        for(j=0; j<b.length(); j++) {
            sum += (a[i] - '0') * (b[j] - '0');
        }
    }
    cout<< sum;
}