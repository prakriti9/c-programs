#include <bits/stdc++.h>
using namespace std;

// void merge(int ar1[], int ar2[], int m,int n)
// {
//     int ar3[m+n];
//     int k = 0;
//     int i = 0, j = 0;
//     while(i < m and j <n)
//     {
//         if(ar1[i] < ar2[j])
//         {
//             ar3[k++] = ar1[i++];

//         }
//         else if(ar1[i] > ar2[j])
//         {
//             ar3[k++] = ar2[j++];
            
//         }
//     }
//     while(i<m)
//     {
//         ar3[k++] = ar1[i++]; 
//     }
//     while(j<m)
//     {
//         ar3[k++] = ar2[j++];
//     }
//     for(int i = 0;i<m+n;i++)
//     {
//         cout<<ar3[i]<<" ";
//     }
//     cout << endl;

//     for(int i = 0;i<m;i++)
//     {
//         ar1[i] = ar3[i];
//     }
//         int l = 0;
//         for(int j = m;j <= n;j++)
//         {
//             ar2[l++] = ar3[j];
//         }
//         for(int i = 0;i<m;i++)
//         {
//             cout<<ar1[i]<<" ";
//         }
//         cout<<endl;
//         for(int i = 0;i<n;i++)
//         {
//             cout<<ar2[i]<<" ";
//         }
//         cout<<endl;
// }
void merge(int ar1[], int ar2[], int m,int n)
{
    // without using extra spaces
    int i = m - 1;
    int j = 0;
    while(i>= 0 and j<n)
    {
        if(ar1[i] >= ar2[j])
        {
            swap(ar1[i],ar2[j]);
            i--;
            j++;
        }
        else{
            break;
        }
    }
    sort(ar1, ar1+m);
    sort(ar2, ar2 + n);
    // displaying the arrays
    for(int i = 0;i<m;i++)
    {
        cout<<ar1[i]<<" ";
    }
    cout<<endl;
    for(int i = 0;i<n;i++)
    {
        cout<<ar2[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int ar1[] = {10};
    int ar2[] = {2,3};
    int m  = sizeof(ar1)/ sizeof(int);
    int n = sizeof(ar2)/ sizeof(int);
    merge(ar1,ar2,m,n);
    return 0;
}