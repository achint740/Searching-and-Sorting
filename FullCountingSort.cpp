#include<bits/stdc++.h>
using namespace std;
int main() {
    //cout<<"Hello World!";
    int n,i,x;
    string s;
    cin>>n;
    map<int,list<string>>m;
    for(i=1;i<=n;i++){
        cin>>x;
        cin>>s;
        if(i<=n/2){
            m[x].push_back("-");
        }
        else{
            m[x].push_back(s);
        }
    }
    for(auto i:m){
        //cout<<i.first;
        for(auto j:i.second){
            cout<<j<<" ";
        }
    }
return 0;
}
