#include <iostream>
using namespace std;
int main(void){
      int t, a, b;
      cin >> t;
      int arr[t];
      for(int i=0; i<t; i++){
            cin >> a >> b;
            int num = a;
            if(b==1) num = num % 10;
            for(int j=0; j<b-1; j++){
                  num = num * a % 10;
            }
            if(num == 0) arr[i] = 10;
            else arr[i] = num;
      }
      for(int i=0; i<t; i++){
            cout<< arr[i] <<endl;
      }
}