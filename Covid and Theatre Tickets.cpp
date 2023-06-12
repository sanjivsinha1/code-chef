#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	    int c,s;
	    cin>>c>>s;
	    int ans=0;
	    for(int j=0;j<c;j+=2){
	        if(s%2) ans+=s/2+1;
	        else ans+=s/2;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
