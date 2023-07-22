#include <iostream>

int main() {
    int N;
    char arr[51];

    scanf("%d", &N);

    for(int i=1; i<=N; i++) {
        getchar();
        scanf("%[^\n]s", arr);
        printf("%d. %s\n", i, arr);
    }

    return 0;
}