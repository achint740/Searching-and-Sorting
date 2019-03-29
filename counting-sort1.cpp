#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int pos[100];
    for(int i=0;i<n;i++)
      cin>>arr[i];
    for(int i=0;i<100;i++)
     {
         pos[i]=0;
     }
    for(int i=0;i<n;i++)
     {
         pos[arr[i]]++;
     }
    for(int i=0;i<100;i++)
     {
        cout<<pos[i]<<" ";
     }
}
