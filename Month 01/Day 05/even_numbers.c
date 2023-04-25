/*#include<stdio.h>
int main(){
    int n;

    for(n = 1; n<=100; n++){
        if(n%2 == 0){
            printf("%d\n", n);
        }
    }
}
*/

/*#include<stdio.h>
int main(){
    int n;

    for(n = 1; n<=100; n+=2){
        printf("%d\n", n);
    }
}*/

#include<stdio.h>
int main(){
    int n;

    for(n = 0; n<=100; n++){
        if(n%2!=0){
            continue;
        }
        printf("%d\n",n);
    }
}
