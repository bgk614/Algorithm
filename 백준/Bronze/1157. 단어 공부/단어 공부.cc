#include <iostream>
#include <string>
using namespace std;
int main(void){
    int alpha[26] = {};
    char ans;
    int max = 0;

    string str;
    cin>> str;

    for(int i=0; i<str.length(); i++){
        if('a' <= str[i] && str[i] <= 'z') str[i] -= 'a';
        else str[i] -= 'A';
        alpha[str[i]]++;
    }
    for(int i=0; i<26; i++){
        if(alpha[i] == max){
            ans = '?';
        }else if(alpha[i] > max){
            max = alpha[i];
            ans = i+'A';
        }
    }
    cout<< ans;
}