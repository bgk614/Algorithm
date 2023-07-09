#include <iostream>
#include <string>
using namespace std;

int main() {
    int count = 0;
    string str;

    cin >> str;
    for(int i=0; i<str.length(); i++) {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            count++;
        }
    }

    cout << count;

    return 0;
}
