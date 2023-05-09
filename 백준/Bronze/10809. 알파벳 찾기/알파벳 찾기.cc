#include <iostream>
#include <string>
using namespace std;
int main(void){
    int alpha[26] = {0, };
    string str;
    cin>> str;
    for(int i=0; i<26; i++){
        alpha[i] = -1;
    }
    for(int i=0; i<str.length(); i++){
        if(alpha[str[i]-'a'] == -1){
            alpha[str[i]-'a'] = i;
        }
    }
    for(int i=0; i<26; i++){
        cout<< alpha[i] <<" ";
    }
}