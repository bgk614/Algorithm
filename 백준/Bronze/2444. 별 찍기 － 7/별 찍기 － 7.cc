#include <iostream>
using namespace std;
int main(){
    int N;
    cin>> N;
    int star = 1;
    for(int i=0; i<N; i++){
        for(int j=1; j<N-i; j++){
            cout<<" ";
        }
        for(int k=0; k<star; k++){
            cout<<"*";
        }
        star += 2;
        cout<<'\n';
    }
    star -= 4;
    for(int i=N-1; i>0; i--){
        for(int j=0; j<N-i; j++){
            cout<<" ";
        }
        for(int k=0; k<star; k++){
            cout<<"*";
        }
        star -= 2;
        cout<<'\n';
    }
    return 0;
}