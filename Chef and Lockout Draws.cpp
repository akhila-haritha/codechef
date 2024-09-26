#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        vector<int>a;
        for(int i=0;i<3;i++){
            int s; cin>>s;
            a.push_back(s);}
        sort(a.begin(),a.begin()+a.size());
        if(a[0] + a[1] == a[2])cout<<"YES\n";
        else cout<<"NO\n";
        
        
    }
    
	// your code goes here

}
