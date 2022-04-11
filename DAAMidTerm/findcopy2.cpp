#include <bits/stdc++.h>
using namespace std;
int firstOcc(int nums[], int n, int key)
{
    int low = 0;
    int high = n-1;
   
    int ans = -1;

    while (low <= high)
    {
         int mid = (low+high) / 2;
        if (nums[mid] == key)
        {
            ans = mid;
            high = mid - 1;
        }
        else if (key > nums[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}

int lastOcc(int nums[], int n, int key)
{
    int low = 0;
    int high = n - 1;
    int ans = -1;

    while (low <= high)
    {
        int mid = (low+high) / 2;
        if (nums[mid] == key)
        {
            ans = mid;
            low = mid + 1;
        }
        else if (key > nums[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int arr[] = {1, 2, 2, 3, 3, 5, 5, 5, 25, 75, 75, 75, 97, 97, 97};
    // int arr[]={235 ,235 ,278 ,278 ,763 ,764 ,790, 853, 981 ,981};
    // int arr[]={1,2,2,2,3,4};
    int n = sizeof(arr) / sizeof(int);
    int left = firstOcc(arr, n, 75);
    int right = lastOcc(arr, n, 75);
    int total = (right-left)+1;
    cout<<"total "<<total<<endl;
}