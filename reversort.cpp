/*
Author : flgis
Date : 3/27/2021
*/
#include<bits/stdc++.h>
using namespace std;
int cost;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int k=1;k<=t;k++){
    cost=0;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        int pos = min_element(a+i,a+n)-(a);
  
       
        cost+=pos-i +1 ;
        int j=i;
        while(pos>=j){
            swap(a[j],a[pos]);
            j++;
            pos--;
        }
    }
    cout<<"Case #"<<k<<": "<<cost<<'\n';
    }
    return 0;
}
