#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	    string  s;
	    cin>>s;
	    int count=1;
	    for(int j=0;j<s.length()-1;j++){
	        if(s[j]!=s[j+1]){
	            count++;
	        }
	    }
	    cout<<count/2<<endl;
	}
	return 0;
}
