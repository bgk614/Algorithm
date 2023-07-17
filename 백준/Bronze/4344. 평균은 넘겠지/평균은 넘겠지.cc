#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int C, N;
    double tmp, avg;
    cin >> C;

    for(int i=0; i<C; i++) {
        avg = 0, tmp = 0;

        cin >> N;
        int arr[N+1];

        for(int j=0; j<N; j++) {
            cin >> arr[j];
            avg += arr[j];
        }

        avg /= N;

        for(int j=0; j<N; j++) {
            if(arr[j] > avg) tmp++;
        }

        cout << setprecision(3) << fixed;
        cout << tmp*100/N << "%" << '\n';
    }
    return 0;
}