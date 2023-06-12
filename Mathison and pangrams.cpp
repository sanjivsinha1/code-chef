#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int arr[26];
	string s;
	int sum=0;
	for(int i=0;i<n;i++){
        int mp[26]={0};
	    sum=0;
	    for(int j=0;j<26;j++){
	        cin>>arr[j];
	    }
	    cin>>s;
	    for(int j=0;s[j]!='\0';j++){
	        mp[s[j]-97]++;
	    }
	    for(int x=0;x<26;x++){
	        if(mp[x]==0){
	            sum+=arr[x];   
	        }
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
