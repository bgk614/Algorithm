#include <iostream>
#include <string>
using namespace std;
int main(void){
    int t;
    cin>> t;
    string str;
    for(int i=0; i<t; i++){
        cin>>str;
        int num = 0;
        int score = 0;
        for(int j=0; j<str.length(); j++){
            if(str[j] == 'O'){
                num += 1;
                score += num;
            }else{
                num = 0;
            }
        }
        cout<<score<<endl;
    }
}