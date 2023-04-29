#include <iostream>
#include <list>
using namespace std;
int main(void){
      int n, i;
      int num = 0;
      cin >> n;
      for(i=1; i<n+1; i++){
            num += i;
      }
      cout << num << endl;
      return 0;
}