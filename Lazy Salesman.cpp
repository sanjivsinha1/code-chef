#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	    int nd,w;
	    cin>>nd>>w;
	    int arr[nd];
	    for(int j=0;j<nd;j++){
	        cin>>arr[j];
	    }
	    sort(arr,arr+nd,greater<int>());
	    int j=0;
	    int sum=0;
	    while(j<nd){
	        sum+=arr[j];
	        if(sum>=w){
	            break;
	        }
	        j++;
	    }
	    cout<<nd-j-1<<endl;
	   
	}
	return 0;
}
