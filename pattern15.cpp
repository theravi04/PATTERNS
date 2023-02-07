#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int i=1;
    
    while(i<=n){
        int j=1;
        while(j<=i){
            char st = 'A'+i-1;
            cout<<st;
            st++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}