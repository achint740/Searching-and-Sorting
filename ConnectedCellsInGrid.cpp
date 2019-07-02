#include<iostream>

using namespace std;

int rec(int arr[12][12],int i,int j,int n,int m)
    {int a=1;
     arr[i][j]=0;
     if(arr[i-1][j-1]==1 && i-1>=0 && j-1>=0)
        a+=rec(arr,i-1,j-1,n,m);
     if(arr[i-1][j]==1 && i-1>=0)
        a+=rec(arr,i-1,j,n,m);
     if(arr[i-1][j+1]==1 && i-1>=0 && j+1<m)
        a+=rec(arr,i-1,j+1,n,m);
     if(arr[i][j-1]==1 && j-1>=0)
        a+=rec(arr,i,j-1,n,m);
     if(arr[i][j+1]==1 && j+1<m)
        a+=rec(arr,i,j+1,n,m);
     if(arr[i+1][j-1]==1 && i+1<n && j-1>=0)
        a+=rec(arr,i+1,j-1,n,m);
     if(arr[i+1][j]==1 && i+1<n)
        a+=rec(arr,i+1,j,n,m);
     if(arr[i+1][j+1]==1 && i+1<n && j+1<m)
        a+=rec(arr,i+1,j+1,n,m);
     return a;
    }

int main()
{int n,m,arr[12][12],ans=0;
 cin>>n>>m;
 for(int i=0;i<n;i++)
    {for(int j=0;j<m;j++)
        cin>>arr[i][j];
    }
 for(int i=0;i<n;i++)
    {for(int j=0;j<m;j++)
        {if(arr[i][j]==1)
            {int res=rec(arr,i,j,n,m);
             ans=max(ans,res);
            }
        }
    }
 cout<<ans;
 return 0;
}
