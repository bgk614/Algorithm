#include <iostream>
using namespace std;
int main() {
    int test, floor, number;
    cin>> test;

    for(int i=0; i<test; i++) {
        cin>> floor >> number;
        int resident[number];

        for(int j=0; j<number; j++) {
            resident[j] = j+1;
        }
        for(int j=0; j<floor; j++) {
            for(int k=number-1; k>0; k--) {  
                int tmp=0;
                while(tmp<k) {
                    resident[k] += resident[tmp];
                    tmp++;
                }
            }
        }    
        cout<< resident[number-1] <<'\n';  
    }
    return 0;
}