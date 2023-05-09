#include <iostream>
#include <string>
using namespace std;
int main(void){
    string str;
    getline(cin, str);
    for(int i=0; i<3; i++){
        if(str[2-i] > str[6-i]){
            for(int j=0; j<3; j++){
                cout<<str[2-j];
            }
            break;
        }else if(str[2-i] < str[6-i]){
            for(int j=0; j<3; j++){
                cout<< str[6-j];
            }
            break;
        }
    }
}