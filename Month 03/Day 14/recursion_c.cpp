#include<bits/stdc++.h>
using namespace std;

void print(int n) {
    if(n == 0){
        return;
    }
    cout << n;
    if(n != 1) {
        cout << " ";
    }
    print(n - 1);

}

int main(){
    int n;
    cin >>n;

    /*for(int i=1;i<=n;i++){
        cout << i << "\n";
    }*/

    print(n);
}

