// Given a sorted array arr[] of size N. Find the element that appears only once in the array. All other elements appear exactly twice.

#include <iostream>
#include <unordered_map>
using namespace std;

// space = O(n), time = O(n)

// int elementonce(int ar[], int n)
// {
//     unordered_map <int,int> mp;
//     for(int i = 0; i< n; i++)
//     {
//         mp[ar[i]]++;
//     }

//     for(auto i: mp)
//     {
//         if(i.second == 1)
//         {
//             return i.first;
//         }
//     }
//     return -1;
// }

int elementonce(int ar[], int n)
{
    int val = 0;
    for(int i = 0; i < n; i++)
    {
        val = val ^ ar[i];
    }
    return val;
}
int main()
{
    int n = 11;
    // cin>> n;
    int ar[] = {1, 1, 2, 2, 3, 3, 4, 50, 50, 65, 65};
    cout << elementonce(ar,n) <<endl;
    return 0;
}