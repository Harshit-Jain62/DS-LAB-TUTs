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

        cout<<"the normal matrix is : "<<endl;
    
        for (int i = 0; i < a; i++)
        {
            for (int j= 0; j < b; j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }

        cout<<"rows addition : "<<endl;

        for (int i = 0; i < a; i++)
        {
            int sum = 0;
            for (int j = 0; j < b; j++)
            {
                sum += arr[i][j];
            }
            cout<<"the sum of row "<<i+1<<" is : "<<sum<<endl;
        }
        
        cout<<"columns addition : "<<endl;

        for (int i = 0; i < b; i++)
        {
            int sum = 0;
            for (int j = 0; j < a; j++)
            {
                sum += arr[j][i];
            }
            cout<<"the sum of column "<<i+1<<" is : "<<sum<<endl;
        }
}