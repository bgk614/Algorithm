#include <iostream>
using namespace std;

int main() {
    int tmp, total = 0;

    for(int i=0; i<5; i++) {
        cin >> tmp;
        total += tmp;
    }

    cout << total;
}