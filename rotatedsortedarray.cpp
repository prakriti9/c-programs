#include <iostream>
using namespace std;

int pivotelement(int ar[], int low, int high)
{
    int pivot = -1;
    if(high < low)
    {
        return -1;
    }
    int mid = low + (high - low)/2;
    if(low < mid and ar[mid] < ar[mid-1])
    {
        pivot = mid;
    }
    else if(mid < high and ar[mid] > ar[mid+1])
    {
        pivot = mid + 1;
    }
    else
    {
        if(ar[low] < ar[mid])
        {
            pivotelement(ar, mid + 1,high);
        }
        else
        {
            pivotelement(ar, low , mid - 1);
        }
    }
    
    return pivot;
}


int binarysearch(int ar[],int low, int high,int key)
{
    while(low <= high) 
    {
        int mid = low + (high - low)/2;
        if(ar[mid] == key)
        {
            return mid;
        }
        else if(ar[mid] > key)
        {
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return -1;
}
int rotatedarraysearch(int ar[], int n, int key)
{
    int pivot = pivotelement(ar, 0, n-1);
    if(pivot == -1)
        return binarysearch(ar, 0, n-1, key); 
    else if(ar[pivot] == key)
        return pivot; 

    else if(ar[0] < key)
        return binarysearch(ar, 0, pivot - 1 ,key);

    return binarysearch(ar, pivot + 1, n - 1 ,key);
}
int main()
{
    int ar[] = {50,60,70,80,90,10,20,30,40};
    int n = sizeof(ar)/ sizeof(int);
    int data = 60;
    
    // if()
    cout<< rotatedarraysearch(ar,n,data) + 1;
    return 0;
}