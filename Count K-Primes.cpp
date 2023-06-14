#include <bits/stdc++.h>
using namespace std;

void factor(vector<int> &c,int n){
    vector<int> fac(n+1,0);
    fac[1]=1;
    for(int i=2;i<=n;i++){
        if(fac[i]==0){
            fac[i]=1;
            for(int j=2*i;j<=n;j+=i){
                fac[j]=fac[j]+1;
            }
        }
    }
    c=fac;
}

int main(){
    int t;
    cin>>t;
    vector<int> all;
    factor(all,100000);
    while(t--){
        int a,b,k,count=0;
        cin>>a>>b>>k;
        for(int i=a;i<=b;i++){
            if(all[i]==k){
                count++;
            }
        }
        cout<<count<<endl;
    }
}
