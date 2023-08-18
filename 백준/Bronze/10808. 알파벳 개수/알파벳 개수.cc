#include <iostream>
using namespace std;

int main() {
    string S;
    cin >> S;
    
    int alphabet[26] = {0, };
    
    for(int i=0; i<S.length(); i++) {
        alphabet[S[i] - 97]++;
    }
    
    for(int i=0; i<26; i++) {
        printf("%d ", alphabet[i]);
    }
    
    return 0;
}