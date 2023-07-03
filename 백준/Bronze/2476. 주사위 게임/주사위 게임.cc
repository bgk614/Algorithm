#include <iostream>
using namespace std;

int main() {
        int N, a, b, c, tmp, max = 0;
        cin >> N;

        for(int i=0; i<N; i++) {
            cin >> a >> b >> c;

            if(a == b && a == c)      tmp = 10000 + a * 1000;
            else if(a == b || a == c) tmp = 1000 + a * 100;
            else if(b == c)           tmp = 1000 + b * 100;
            else {
                if(a > b && a > c)      tmp =  a * 100;
                else if(b > a && b > c) tmp =  b * 100;
                else                    tmp =  c * 100;
            }
            if(max < tmp) max = tmp;
        }

        cout << max;
        return 0;
}