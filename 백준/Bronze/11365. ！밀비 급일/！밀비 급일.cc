#include <iostream>
using namespace std;

int main() {        
    string str;

    while(1) {
        getline(cin, str);
        if(str == "END") break;
        else {
            for(int i=0; i<str.length(); i++) {
                cout << str[str.length() - i - 1];
            }
            cout << "\n";
        }
    }
    return 0;
}