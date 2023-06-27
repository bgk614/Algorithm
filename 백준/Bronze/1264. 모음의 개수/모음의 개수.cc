#include <iostream>
#include <string>
using namespace std;

int main() {
    string tmp;
    int num = 0;

    while(1) {
        getline(cin, tmp);
        if(tmp[0] == '#') break;
        num = 0;
        for(int i=0; i<tmp.length(); i++) {
            if(
                 tmp[i] == 'a' 
               ||tmp[i] == 'e'
               ||tmp[i] == 'i'
               ||tmp[i] == 'o'
               ||tmp[i] == 'u'
               ||tmp[i] == 'A'
               ||tmp[i] == 'E'
               ||tmp[i] == 'I'
               ||tmp[i] == 'O'
               ||tmp[i] == 'U'
               ) {
                num++;
            }
        }
        cout << num <<'\n';
    }
    return 0;
}