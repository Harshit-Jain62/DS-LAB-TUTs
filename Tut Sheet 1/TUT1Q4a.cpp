#include<iostream>
#include<string>
using namespace std;

int main(){

    cout<<"enter the size of array you want : ";
    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout<<"enter the element "<<i+1<<" of the array : ";
        cin>>arr[i];
    }
    
    // reversing the array
    int arr2[n];
    for (int i = 0 , j = n-1 ; i < n , j >= 0; i++ , j--)
    {
        arr2[i]=arr[j];
    }
    for (int i = 0; i < n ; i++)
    {
        cout<<"the element "<<i+1<<" is : "<<arr2[i]<<endl;
    }
    
}