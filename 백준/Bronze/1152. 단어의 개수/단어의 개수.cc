#include <iostream>
#include <string>
using namespace std;
int main(void){
    int num = 0;
    string str;
    getline(cin, str);
    for(int i=1; i<str.length(); i++){
        if(str[i] == ' ') num++;
    }
    if(str[str.length()-1] == ' ') num--;
    cout<< num+1;
}