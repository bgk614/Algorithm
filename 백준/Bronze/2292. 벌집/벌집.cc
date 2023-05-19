#include <iostream>
using namespace std;
int main(){
    int n;
    int i = 1;
    int room = 1;
    cin>> n;
    while(room < n){
        room += i*6;
        i++;
    }
    cout<< i;
}