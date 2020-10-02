#include<iostream>


using namespace std;



int main ()
{
    int arr[9],i,j;
    cout<<"Enter the disorderd elemnts\n";
    for(i=0;i<9;i++)
    cin>>arr[i];

     int key;
    for(i=1;i<9;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
    for(i=0;i<9;i++)
    cout<<arr[i];

}





