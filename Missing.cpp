#include <iostream>
using namespace std;

// int missing(int ar[], int n)
// {
//     int sum = 0;
//     for(int i = 0;i<n;i++)
//     {
//         sum += ar[i];
//     }
//     int original = ((n+1)*(n+2))/2;
//     return (original - sum);
    
// }

int missing(int ar[], int n)
{
    // XOR function
    int sum = 0;
    for(int i = 1;i <= n+1; i++)
    {
        sum = sum ^ i; //1^2^3^4^5^6^7^8^9^10
    }
    for(int i = 0; i < n;i++)
    {
        sum = sum ^ ar[i]; //1^2^3^4^5^6^7^8^9^10^(1^2^3^4^6^7^8^9^10)
    }
    
    return sum;

    
}
int main()
{
    int ar[] = {1,2,4,3,6,7,9,8,10};
    int n = sizeof(ar)/ sizeof(int);
    cout<< missing(ar,n);
    return 0;
}