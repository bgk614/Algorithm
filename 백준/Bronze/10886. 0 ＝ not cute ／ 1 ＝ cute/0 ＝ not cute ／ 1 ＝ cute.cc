#include <iostream>

int main() {
    int N, tmp, notcute = 0, cute = 0;

    scanf("%d", &N);

    for(int i=0; i<N; i++) {
        scanf("%d", &tmp);
        if(tmp == 0)
            notcute++;
        else
            cute++;
    }

    if(notcute > cute)
        printf("Junhee is not cute!");
    else
        printf("Junhee is cute!");
    
    return 0;
}