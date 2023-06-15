#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool compare(pair<int, int>& a, pair<int, int>& b) {
    if(b.second > a.second) 
        return true;
    else if(b.second == a.second) {
        if(b.first > a.first) 
            return true;
        else return 
            false;
    }
    else 
        return false;
}

int main() {
    int N, x, y;
    vector<pair<int, int> > V;
    
    cin >> N;
    V.resize(N);
    
    for(int i=0; i<N; i++) {
        scanf("%d %d", &V[i].first, &V[i].second);
    }
    
    sort(V.begin(), V.end(), compare);
    
    for(int i=0; i<N; i++) {
        printf("%d %d\n", V[i].first, V[i].second);
    }
}