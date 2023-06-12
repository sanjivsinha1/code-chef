#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	    int l;
	    cin>>l;
	    string s;
	    cin>>s;
	    int sum=0;
	    int j=0;
	   // unordered_map<char,int> mp;
	    while(j<l){
	        if(s[j]==s[j+1]){
	            j+=2;
	        }
	        else{
	            j++;
	        }
	            sum++;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
