#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int rem = n%10;
        int rem2;
        while(n>9)
        {
            n = n/10;
        }
        rem2 = n;
        cout<< rem+ rem2 <<endl;
    }
    return 0;
}