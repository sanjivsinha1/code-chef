#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	    long long int r;
	    cin>>r;
	    long long int ans=(r*(r+1))/2;
	    ans+=r;
	    cout<<ans<<endl;
	}
	return 0;
}
