#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        vector<int>a;
        int n; cin>>n;
        for(int i=0;i<n;i++){
            int val; cin>>val;
            a.push_back(val);}
        int pos; cin>>pos;
        int key = a[pos-1]; int ans;
        sort(a.begin(),a.begin() + a.size());
        for(int i=0;i<a.size();i++){
            if(a[i]==key)ans=i+1;}
        cout<<ans<<endl;
        
    }
	// your code goes here

}
