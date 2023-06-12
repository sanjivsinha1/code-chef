#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	int x;
	cin>>n;
	for(int i=0;i<n;i++){
	    cin>>x;
	    int arr[3];
	    for(int j=0;j<3;j++){
	        cin>>arr[j];
	    }
	    sort(arr,arr+3);
	    int ans=arr[0]*(x-1)+arr[1];
	    cout<<ans<<endl;
	}
	return 0;
}
