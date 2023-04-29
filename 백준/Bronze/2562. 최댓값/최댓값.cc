#include <iostream>
using namespace std;
int main(void){
    int num, i;
    int max = 0;
    int n = 0;
    for(i=0; i<9; i++){
        cin >> num;
        if(max < num){
            max = num;
            n = i+1;
        }
    }
    cout << max <<'\n'<< n;
}