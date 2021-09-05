#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int greatest,sec;
        if(a>b && a>c)
        {
            greatest = a;
            if(b>c and b<a)
            {
                sec = b;
            }
            else
            {
                sec = c;
            }
        }
        else if(b>a && b>c)
        {
            greatest = b;
            if(a>c and a<b)
            {
                sec = a;
            }
            else
            {
                sec = c;
            }
        }
        else
        {
            greatest = c;
            if(a>b and a<c)
            {
                sec = a;
            }
            else
            {
                sec = b;
            }
        }
        cout<<sec<<endl;
        
    }
    return 0;
}