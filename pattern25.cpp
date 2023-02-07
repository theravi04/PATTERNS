#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while (j<=(n-i+1)){
            cout<<j;
            j++;
        }
        int st = i-1;
        while (st){
            cout<<"*";
            st--;
        }
        int j2 = 2;
        while(j2<=i){
            cout<<"*";
            j2++;
        }
        int j3=i-1;
        while (j3<=(n-1)){
            cout<<(n-j3);
            j3++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}