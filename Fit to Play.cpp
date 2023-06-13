#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int j=0;j<n;j++){
	        cin>>arr[j];
	    }
	    int mini=arr[0];
	    int maxi=0;
	    for(int j=1;j<n;j++){
	        if(arr[j]<mini){
	            mini=arr[j];
	        }
	        else{
	            maxi=max(maxi,arr[j]-mini);
	        }
	    }
	    maxi==0?cout<<"UNFIT"<<endl:cout<<maxi<<endl;
	}
	return 0;
}
