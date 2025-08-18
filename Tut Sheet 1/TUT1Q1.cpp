#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){

    int n = 0;
    int a = 0;
    vector <int>arr;

    int t = 1;
    while(t==1){

        cout<<"enter the operation you want to perform : "<<endl;
        string oper;
        cin>>oper;

        if (oper=="create")
        {
            cout<<"enter the size of array you want : ";
            cin>>n;
            arr.resize(n);
            cout<<"enter the elements you want to enter in array : ";
            cin>>a;
            for (int i = 0; i < a; i++)
            {
                cout<<"enter the element "<<i+1<<" of the array :";
                cin>>arr[i];
            }
        }
        else if (oper=="display")
        {
            for (int i = 0; i < a; i++)
            {
                cout<<"the element "<<i+1<<" of the array is : "<<arr[i]<<endl;
            }
        }
        else if (oper == "insert")
        {

            if (a == n) {
                cout << "Array full! Resizing..." << endl;
                n++;
                arr.resize(n);
            }

            cout<<"enter the element you want to insert : ";
            int c , d ;
            cin>>c;
            cout<<"enter the index you want to add element to : ";
            cin>>d;

            if (d < 0 || d > a) {
                cout << "Invalid index!" << endl;
                continue;
            }

            for (int i = a; i >= d; i--)
            {
                arr[i+1]=arr[i];
            }
            arr[d]=c;
            a++;
            cout<<"the new updated array is : "<<endl;
            for (int i = 0; i < a ; i++)
            {
                cout<<"the element "<<i+1<<" of the array is : "<<arr[i]<<endl;
            }
            
        }
        else if (oper == "delete")
        {
            cout<<"enter the element index you want to delete : ";
            int f;
            cin>>f;

             if (f < 0 || f >= a) {
                cout << "Invalid index!" << endl;
                continue;


            for (int i = f; i < a; i++)
            {
                arr[i]=arr[i+1];
            }
            a--;

            cout<<"the new updated array is : "<<endl;
            for (int i = 0; i < a ; i++)
            {
                cout<<"the element "<<i+1<<" of the array is : "<<arr[i]<<endl;
            }
        }
    }
        else if (oper == "search")
        {
            cout<<"enter the element you want to find : ";
            int g;
            cin>>g;
            int flag = 0; 
            for (int i = 0; i < a; i++)
            {
                if (arr[i]==g)
                {
                    cout<<"the element you want to find is at index : "<<i<<endl;
                    flag=1;
                    break;
                }
                else{
                    continue;
                }
            }
            if (flag==0)
            {
                cout<<"the element you want to find is not in array "<<endl;
            }
        }
        else if (oper=="exit")
        {
            t=0;
            break;
        }
    }

    return 0 ;
}