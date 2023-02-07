#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int i=1;
    
    while(i<=n){
        int j=1;
        char st = 'A'+i-1;
        while(j<=n){
            cout<<st;
            st++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}