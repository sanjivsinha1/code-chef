#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int n,p,r,a;
	for(int i=0;i<t;i++){
	    cin>>n>>p>>r>>a;
	    if(a<n*r){
	        cout<<-1<<endl;
	    }
	    else if(a>=p*r){
	        cout<<0<<" "<<r<<endl;
	    }
	    else{
	        int l=min(r,(a-n*r)/(p-n));
	        int k=r-l;
	        cout<<k<<" "<<l<<endl;
	    }
	    
	}
	return 0;
}
