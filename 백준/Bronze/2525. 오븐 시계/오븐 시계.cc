#include <iostream>
int main(void){
      int a, b, c;
      std::cin >> a >> b;
      std::cin >> c;
      a += (b+c)/60;
      b = (b+c)%60;
      if(a >= 24) a = a%24;
      std::cout << a <<" "<< b;
      return 0;
}