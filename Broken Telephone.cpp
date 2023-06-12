#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	int m;
	cin>>n;
	for(int i=0;i<n;i++){
	    cin>>m;
	    int s=0;
	    int arr[m];
	    for(int j=0;j<m;j++){
	        cin>>arr[j];
	    }
	    for(int j=0;j<m;j++){
	        if(j==0){
	           if(arr[j]!=arr[j+1])
	                s++;
	        }
	        else if(j==m-1){
	            if(arr[j-1]!=arr[j]){
	                s++;
	            }
	        }
	        else{
	            if(arr[j-1]==arr[j]&&arr[j]==arr[j+1]){}
	            else
	            s++;
	        }
	    }
	    cout<<s<<endl;
	}
	return 0;
}
