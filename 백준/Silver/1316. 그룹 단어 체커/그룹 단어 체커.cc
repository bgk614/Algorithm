#include <iostream>
using namespace std;

int main() {
        int N;
        scanf("%d", &N);

        int cnt = N;

        for(int i=0; i<N; i++) {
            string str;
            cin >> str;

            if(str.length() > 2){
                for(int j=0; j<str.length()-1; j++) {
                    int k;
                    for(k=j+1; k<str.length(); k++) {
                        if(str[j] == str[k] && str[j] != str[k-1]){
                            cnt--;
                            break;
                        }
                    }
                    if(str[j] == str[k] && str[j] != str[k-1]){
                            break;
                    }
                }
            } 
        }
        
    printf("%d", cnt);
}