#include<iostream>


using namespace std;



int main()
{
    int arr[9],i,j;
    cout<<"Enter the disordered elements\n";
    for(i=0;i<9;i++)
    {
        cin>>arr[i];
    }
    int mini,temp;
    for(i=0;i<9-1;i++)
    {
        mini=i;
        for(j=i+1;j<9;j++)
        {
            if(arr[j]<arr[mini])
                mini=j;
        }
        temp=arr[i];
        arr[i]=arr[mini];
        arr[mini]=temp;
    }
    cout<<"The sorted elements are:\n";
    for(i=0;i<9;i++)
    {
        cout<<arr[i]<<"\t";
    }
}
