#include <bits/stdc++.h>
using namespace std;

void evenodd(int ar[], int n)
{
    int l = 0, r = n-1;
    while(l<r)
    {
        if(ar[l] % 2 != 0)
        {
            swap(ar[l], ar[r--]);
        }
        else{
            l++;
        }
    }
}
int main()
{
    int ar[] = {5,4,3,2,1,8};
    int n = *(&ar + 1) - ar; // find the size of array without using sizeof function 
    // cout<< n <<endl;
    evenodd(ar,n);
    for(int i = 0 ;i<n;i++)
    {
        cout << ar[i] << " ";
    }
}