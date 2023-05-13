#include <iostream>
using namespace std;
int main(){
    int t, h, w, n;
    cin>> t;
    for(int i=0; i<t; i++){
        cin>> h >> w >> n;
        int floor = n%h;
        int num = n/h;
        if(floor > 0) num++;
        else floor = h;
        cout<< floor; 
        if(num < 10) cout<< "0";
        cout<< num <<'\n';

    }
    return 0;
}