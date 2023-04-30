#include <iostream>
#include <string>
using namespace std;
int main(void){
    int t, r;
    cin>> t;
    string str;
    for(int i=0; i<t; i++){
        cin >> r >> str;
        for(int j=0; j<str.length(); j++){
            for(int k=0; k<r; k++){
                cout<< str[j];
            }
        }
    cout<<'\n';
    }
}