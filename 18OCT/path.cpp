#include<iostream>
using namespace std;
int main()
{
int p;
cout<<"Enter your Path";
cin>>p;
if(p==1)
{
    cout<<"Enter your Path";
    cin>>p;   
    if(p==2)
    {
        cout<<"Enter your path";
        cin>>p;
        if(p==3)
        {
            cout<<"Enter your Path";
            cin>>p;
            if(p==4)
            {
                cout<<"Destination Reached";
            }
        }
        else if(p=4)
        {
            cout<<"Destination Reached";
        }
        
        else
        {cout<<"Invalid Path";}

    }
          
    else if(p==3)
    {
        cout<<"Enter your path";
        cin>>p;
        if(p==2)
        {
            cout<<"Enter your path";
            cin>>p;
            if(p==4)
            {
                cout<<"Destination Reached";
            }
            else
            {cout<<"Invalid Path";}            

        }
        else if(p==4)
        {
            cout<<"Destination Reached";
        }
        else
        {
            cout<<"Invalid path";
        }
    }
    
    else if(p==4)
    {
        cout<<"Destination Reached";
    }
    else
    {
        cout<<"Invalid Path";
    }
}
else{cout<<"Invalid Path";}

}