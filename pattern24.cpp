#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int i=1;
    
    while(i<=n){

        int space = n-i;
        while(space){
            cout<<" ";
            space = space-1;
        }
        int j=1;
        while(j<=i){
            cout<<j;
            j++;
        }
        int st = i-1;
        while (st)
        {
            cout<<st;
            st--;
        }
        
        cout<<endl;
        i++;
    }
    return 0;
}