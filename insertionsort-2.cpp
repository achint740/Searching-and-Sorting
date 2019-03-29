#include<iostream>
using namespace std;

int main()
 {
     int n;
     cin>>n;
     int a[n];
     int i,j,key;
     for(i=0;i<n;i++)
       cin>>a[i];
  for(i=1;i<n;i++)
   {
       j=i-1;
       key=a[i];

       while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;

     for(int k=0;k<n;k++)
       cout<<a[k]<<" ";
    cout<<endl;
   }
    //for(int k=0;k<n;k++)
      // cout<<a[k]<<" ";
    //cout<<endl;
 }
