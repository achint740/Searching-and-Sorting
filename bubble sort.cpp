#include<iostream>


using namespace std;



int main ()
{
    int arr[9],i,j;
    cout<<"Enter the disorderd elemnts\n";
    for(i=0;i<9;i++)
    cin>>arr[i];

     int temp;
    for(i=0;i<9;i++)
    {


    for(j=0;j<(9-i-1);j++)
    {
        if( arr[j]>arr[j+1])
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
    }
    cout<<"The sorted  elemnts are:\n";
    for(i=0;i<9;i++)
    cout<<arr[i]<<"\t";

}





