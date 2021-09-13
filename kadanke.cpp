// Given an array arr of N integers. Find the contiguous sub-array with maximum sum.

#include <bits/stdc++.h>
using namespace std;

int algo(vector <int> v)
{
    int maxsum = 0;
    int maxtillnow = 0;
    for(int i = 0;i <v.size() - 1;i++)
    {
        maxtillnow += v[i];
        if(maxtillnow > maxsum)
        {
            maxsum = maxtillnow;
        }
        if(maxtillnow < 0)
        {
            maxtillnow = 0;
        }
    }
    if(maxtillnow == 0)
        return -1;
    return maxsum;
}
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

    cout << algo(v) <<endl;
    return 0;
}