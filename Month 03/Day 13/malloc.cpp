#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter char number:";
    cin>>n;
    char* arr=new char[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'||arr[i]=='A'||arr[i]=='E'||arr[i]=='I'||arr[i]=='O'||arr[i]=='U'){
            cout<<arr[i]<< " ";
        }
    }
}
