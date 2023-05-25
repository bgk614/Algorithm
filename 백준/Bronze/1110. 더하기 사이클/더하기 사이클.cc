#include <iostream>
using namespace std;
int main() {
    int n;
    cin>> n;
    int i = 1;
    int tmp = (n % 10 * 10) + (n / 10 + n % 10) % 10;
    while(tmp != n) {
        tmp = (tmp % 10 * 10) + (tmp / 10 + tmp % 10) % 10;
        i++;
    }
    cout<< i;
}