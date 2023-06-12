#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	int a,b;
	cin>>n;
	for(int i=0;i<n;i++){
	    int k=0;
	    cin>>a>>b;
	    int arr[a];
	    for(int j=0;j<a;j++){
	        cin>>arr[j];
	        if(arr[j]<b){
	            k=j+1;
	        }
	    }
	    cout<<k<<endl;
	}
	return 0;
}
