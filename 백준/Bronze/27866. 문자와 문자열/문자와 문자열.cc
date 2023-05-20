#include <iostream>
#include <string>
using namespace std;
int main(){
    string S;
    int i;
    getline(cin, S);
    cin>> i;
    cout<< S[i-1];
    return 0;
}