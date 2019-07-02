#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

  ll i,n,j;
  cin>>n;
  ll *a = new ll[n];
  vector<pair<ll,ll>>v;
  for(i=0;i<n;i++){
      cin>>a[i];
      v.push_back(make_pair(a[i],i+1));
  }
  sort(v.begin(),v.end());
  ll mindiff = INT_MAX;
  for(i=1;i<n;i++){
      ll diff = v[i].first - v[i-1].first;
      if(v[i-1].second>v[i].second && diff<mindiff){
          mindiff = diff;
      }
  }
  cout<<mindiff;
  return 0;
  


}
