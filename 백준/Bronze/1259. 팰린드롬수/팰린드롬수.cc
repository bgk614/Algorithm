#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    while (1) {
        getline(cin, str);
        if(str[0] == '0') break;
        for(int i=0; i<str.length(); i++) {
            if(str[i] != str[str.length() - 1 - i]) {
                cout<< "no" <<'\n';
                break;
            }
            if(i==str.length()/2) {
                cout<< "yes" <<'\n';
                break;
            } 
        }
    }
    return 0;
}