#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	    int l,m;
	    cin>>l>>m;
	    string s;
	    cin>>s;
	    if(s[0]=='0'){
	        s[0]='1';
	        m--;
	    }
	    for(int j=0;j<m;j++){
	        
	        s+='0';
	    }
	    cout<<s<<endl;
	}
	return 0;
}
