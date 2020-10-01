#include<iostream>
using namespace std;
int main()
 {
     int n,i,j,num;
     cin>>n;
     int a[n];
     for(i=0;i<n;i++)
       cin>>a[i];
    num=a[n-1];
    for(i=n-1;i>0;i--)
     {
         if(a[i-1]>=num){
           a[i]=a[i-1];
        for(j=0;j<n;j++)
           cout<<a[j]<<" \n";
         }
          else
          {
              a[i]=num;
               for(j=0;j<n;j++)
           cout<<a[j]<<" \n";
           break;
          }
     }
     if(i==0)
     {
         a[0]=num;
       for(j=0;j<n;j++)
           cout<<a[j]<<" \n";
     }
 }

