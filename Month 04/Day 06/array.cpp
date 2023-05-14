#include<bits/stdc++.h>
using namespace std;

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    
    int ar[10];
    ar[3] = 10;
    for (int i = 0; i < 10; i++) {
        printf("%p\n", &ar[i]);
    }

    printf("ar is -> %p\n", ar);

    printf("%d", ar[3]);
}