#include<iostream>
using namespace std;
int main()
{
 int n,i,j,key;
 cin>>n;
 int *a=new int[n];
 for(i=0;i<n;i++)
   cin>>a[i];
 for(i=1;i<n;i++)
  {
      j = i-1;
      key=a[i];
      while(j>=0 && a[j]>key)
       {
           a[j+1] = a[j];
           j--;
       }
       a[j+1] = key;
  }
  cout<<a[(n)/2];
}
