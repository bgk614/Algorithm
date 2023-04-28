#include <iostream>
#include <list>
using namespace std;
int main(void){
      int t, a, b;
      int i = 0;
      int score[t];
      cin >> t;

      for(i=0; i<t; i++){
            cin >> a >> b;
            score[i] = (a+b);      
      }
      for(i=0; i<t; i++){
            cout << score[i] << endl;
      }
      return 0;
}