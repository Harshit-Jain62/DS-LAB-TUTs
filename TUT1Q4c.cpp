#include<iostream>
#include<string>
using namespace std;

int main(){

    // transpose of a matrix

    int a,b;
    cout<<"enter the rows of array you want : ";
    cin>>a;
    cout<<"enter the columns of array you want : ";
    cin>>b;
    int arr[a][b];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout<<"enter the element "<<i<<j<<" : ";
            cin>>arr[i][j];
        }
    }
    
    int arr_transpose[b][a];
    for (int i = 0; i < b; i++)
    {
        for (int j = 0;  j < a; j++)
        {
            arr_transpose[i][j]=arr[j][i];
        }
        
    }
    
    cout<<"the normal matrix is : "<<endl;
    
        for (int i = 0; i < a; i++)
        {
            for (int j= 0; j < b; j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    

        cout<<"the transposed matrix is : "<<endl;
    
        for (int i = 0; i < b; i++)
        {
            for (int j= 0; j < a; j++)
            {
                cout<<arr_transpose[i][j]<<" ";
            }
            cout<<endl;
        }



}