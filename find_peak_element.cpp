#include <iostream>
#include <vector>
using namespace std;

int peakelement(vector <int> v, int start,int end)
{
    // int start = 0;
    // int end = v.size() - 1;
    while(start <= end)
    {
        int mid = (start + end) /2;
        if(v[mid] > v[mid+1] && v[mid] > v[mid-1])
        {
            return v[mid];
        }
        else if(mid > 0 && v[mid-1] > v[mid])
        {
            return peakelement(v, start, mid-1);
        }
        else
        {
            return peakelement(v, mid+1, end);
        }
    }
    return 0;
}

int main()
{
    vector <int>  v = {4, 7, 34, 12, 56};
    cout<< peakelement(v,0,4);
    return 0;
}