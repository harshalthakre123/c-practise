#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the day number:-";
    cin>>a;
    if(a==1)
    {
        cout<<"Monday";
    }
    else if(a==2)
    {
        cout<<"Tuesday";
    }
    else if(a==3)
    {
        cout<<"Wednesday";
    }
    else if(a==4)
    {
        cout<<"Thursday";
    }
    else if(a==5)
    {
        cout<<"Friday";
    }
    else if(a==6)
    {
        cout<<"Saturday";
    }
    else if(a==7)
    {
        cout<<"Sunday";
    }
    else
    {
        cout<<"Wrong input";
    }
}