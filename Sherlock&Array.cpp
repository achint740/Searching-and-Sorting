#include<iostream>
using namespace std;
int main()
{
    int t,i,j,k,n,sumleft,sumright,sum;
    cin>>t; //Input the number of testcases
    while(t--){ 
       cin>>n;
       int *a = new int[n];
       int *s = new int[n+1];
       //Array s will store the cumulative sum
       sum=0; //To store the sum of all elements
       s[0]=0; //There is no element to left of a[0]

       for(i=0;i<n;i++){
           cin>>a[i];
           if(i==0){
             s[i+1]=a[i];
           }
           else{
             s[i+1]=a[i]+s[i]; //Storing Cumulative Sum
            } 
         sum+=a[i];
       }
    //Assume first that the array doesn't satisfy the criterion
    bool res=false; 
    //Two variables to keep track of sum to the left and 
     //right of the current value on which we are
    sumleft=0; 
    sumright=0;
      for(i=0;i<n;i++){
          sumleft=s[i];
          sumright=sum-sumleft-a[i];

          if(sumleft==sumright){
              res=true;
              break;
          }
      }
      //If result is found true then print "YES" else "NO"
      if(res){
          cout<<"YES"<<endl;
      }
          else{
           cout<<"NO"<<endl;
          }
     }
return 0;
}
