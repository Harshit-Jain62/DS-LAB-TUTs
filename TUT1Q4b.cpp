#include<iostream>
#include<string>
using namespace std;

int main(){

    int a,b,c,d;
    cout<<"enter the rows of matrix 1 : ";
    cin>>a;
    cout<<"enter the columns of matrix 1 : ";
    cin>>b;
    cout<<"enter the rows of matrix 2 : ";
    cin>>c;
    cout<<"enter the columns of matrix 2 : ";
    cin>>d;

    if (b==c)
    {
        int mat1[a][b];
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                cout<<"enter the element "<<i<<j<<" of matrix 1 : ";
                cin>>mat1[i][j];
            }
        }

        int mat2[c][d];
        for (int i = 0; i < c; i++)
        {
            for (int j= 0; j < d; j++)
            {
                cout<<"enter the element "<<i<<j<<" of matrix 2 is : ";
                cin>>mat2[i][j];
            }
            
        }

           cout<<"the matrix 1 is :"<<endl;

       
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b ; j++)
            {
                cout<<mat1[i][j]<<" ";
            }
            cout<<endl;
        }

        cout<<"the matrix 2 is :"<< endl;

        for (int i = 0; i < c; i++)
        {
            for (int j= 0; j < d; j++)
            {
                cout<<mat2[i][j]<<" ";
            }
            cout<<endl;
        }
        
        int mat3[a][d];

        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < d; j++)
            {
                mat3[i][j]=0;
                for (int k = 0 ; k < b ; k++)
                {
                    mat3[i][j] += mat1[i][k]*mat2[k][j];
                }   
            } 
        }
        
        cout<<"the resultant matrix is :"<<endl;

        for (int i = 0; i < a; i++)
        {
            for (int j= 0; j < d; j++)
            {
                cout<<mat3[i][j]<<" ";
            }
            cout<<endl;
        }

    }
    
    else{
        cout<<"the entered matrix attributes wouldn't allow for matrix multiplication ";
    }
}