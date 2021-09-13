// Given an unsorted array A of size N of non-negative integers, find a continuous sub-array which adds to a given number S.

// Input:
// 2
// l = 5 sum = 12
// 1 2 3 7 5
// 10 15
// 1 2 3 4 5 6 7 8 9 10
// Output:
// 2 4
// 1 5


#include <bits/stdc++.h>
using namespace std;

vector <int> subarray(vector <int > v, int n,int sum)
{
    vector <int > v1;
    int i = 0;
    int j = 1;
    int curr = v[i];
    while(true)
    {
        if(curr == sum)
        {
            v1.push_back(i+1);
            v1.push_back(j);
            break;
        }
        else if(curr < sum)
        {
            curr += v[j];
            j++;
        }
        else
        {
            curr -= v[i];
            i++;
        }
    }
    return v1;
}
int main()
{
    vector <int> v;
    int n;
    cin>> n;
    int sum;
    cin >> sum;

    for(int i = 0;i < n; i++)
    {
        int ele;
        cin>> ele;
        v.push_back(ele);
    }

    vector <int> v1 = subarray(v, n, sum);
    cout<<v1[0]<<" "<<v1[1]<<endl;

    return 0;
}