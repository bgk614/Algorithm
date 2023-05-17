#include <iostream>
using namespace std;
int main(){
    int n, m;
    int max = 0;

    cin>> n >> m;
    int arr[n];
    
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<n; k++){
                if(i==j || j== k || k==i) continue;
                int sum = arr[i]+arr[j]+arr[k];
                if(sum <= m && max < sum){
                    max = sum;
                }
            }
        }
    }
    cout<< max;
    return 0;
}