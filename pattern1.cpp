#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1; //rows
    while(i<=n){
        int j=1; //column
        while(j<=n){
            cout<<" * ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}