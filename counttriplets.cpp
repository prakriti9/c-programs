// Given an array of distinct integers. The task is to count all the triplets such that sum of two elements equals the third element

#include <bits/stdc++.h>
using namespace std;

int counttriplets(vector <int> v)
{
    int n = v.size() - 1;
    int count = 0;
    for(int i = 0;i <n;i++)
    {
        for(int j = 1;j<n;j++)
        {
            int sum = v[i] + v[j];
            for(int k = 0;k < n;k++)
            {
                if(v[k] == sum)
                {
                    count++;
                }
            }
        }
    }
    if(count == 0)
        return -1;
    return count;
}

// int counttriplets(vector <int> v)
// {
//     int c=0;
//     int n=v.size();
//     sort(v.begin(),v.end());
//     for(int i=0;i<n;i++)
//     {
//         int j=i+1;
//         int k=j+1;
        
//         while(k<n)
//         {
//             if(v[i]+v[j]==v[k])
//             {
//                 j++;
//                 c++;
               
//             }
            
//             else if(v[i]+v[j]<v[k])
//             {
//                 j++;
//                 k--;
//             }
//             k++;
            
//         }
//     }
    
//     if(c==0)
//         return -1;
//     return c;

// }

int main()
{
    vector <int> v;
    int n;
    cin>> n;

    for(int i = 0;i < n; i++)
    {
        int ele;
        cin>> ele;
        v.push_back(ele);
    }

    cout << counttriplets(v) <<endl;
    return 0;
}