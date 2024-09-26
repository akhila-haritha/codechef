#include <bits/stdc++.h>
using namespace std;

void merge_sort(vector<int>&arr,int l,int r);
void merge(vector<int>&arr,int l,int m,int r);

int main() {
    int n;
    cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        a.push_back(val);}
    merge_sort(a,0,n-1);
    for(int i=0;i<n;i++)cout<<a[i]<<endl;
    return 0;
	// your code goes here
}

void merge_sort(vector<int>&a,int l,int r){
    if(l<r){
        int mid = (l+r)/2;
        merge_sort(a,l,mid);
        merge_sort(a,mid+1,r);
        merge(a,l,mid,r);}
}

void merge(vector<int>&a,int l,int m,int r){
    int n1 = m-l+1,n2 = r-m;
    int left[n1],right[n2];
    int i,j,k;
    
    for(i=0;i<n1;i++){
        left[i] = a[l+i];}
    for(j=0;j<n2;j++){
        right[j] = a[m+1+j];}
    
    i=0;j=0;k=l;
    
    while(i<n1 && j<n2){
        if(left[i] <= right[j]){
            a[k++] = left[i++];}
        else{
            a[k++] = right[j++];}
    }
    
    while(i<n1){
        a[k++] = left[i++];}
    
    while(j<n2){
        a[k++] = right[j++];}
    
    return;
}
