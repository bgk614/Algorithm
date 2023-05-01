#include <iostream>
#include <string>
using namespace std;
int main(void){
    int n = 0;
    int num = 0;
    string str;
    cin>> n;
    cin>> str;
    for(int i=0; i<n; i++){
        num += str[i]-48;
    }
    cout<< num;
    return 0;
}