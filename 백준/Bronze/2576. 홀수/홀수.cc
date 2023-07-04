#include <iostream>
using namespace std;

int main() {
    int num, min = 0, sum = 0;
    
    for(int i=0; i<7; i++) {
        cin >> num;
        if(num % 2 != 0) {
            if(min > num || min == 0) min = num;
            sum += num;
        }
    }
    if(sum == 0) cout << "-1";
    else cout << sum <<'\n'<< min;
}