#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i == 0){
            printf("%d\n",i);
        }
    }
}
//time complexity: O(n)
//space complexity: O(1)
