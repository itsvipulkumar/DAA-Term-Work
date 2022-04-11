/*  WEEK 2
I. Given a sorted array of positive integers containing few duplicate elements, design an algorithm
and implement it using a program to find whether the given key element is present in the array or
not. If present, then also find the number of copies of given key. (Time Complexity = O(log n))
*/
#include <bits/stdc++.h>
using namespace std;
int firstOcc(int arr[], int n, int key)
{
    int low = 0;
    int high = n-1;
   
    int ans = -1;

    while (low <= high)
    {
         int mid = (low+high) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            high = mid - 1;
        }
        else if (key > arr[mid])
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

int lastOcc(int arr[], int n, int key)
{
    int low = 0;
    int high = n - 1;
    int ans = -1;

    while (low <= high)
    {
        int mid = (low+high) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            low = mid + 1;
        }
        else if (key > arr[mid])
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

    int T_case, size, key;
    cout << "Number of Test Cases : ";
    cin >> T_case;
    while (T_case != 0)
    {
        cout << "Enter the size of array : ";
        cin >> size;
        int arr[size];
        cout << "Enter elements : " << endl;
        for (int i = 0; i < size; i++)
            cin >> arr[i];
        cout << "enter key : ";
        cin >> key;
         int left = firstOcc(arr, size, key);
    int right = lastOcc(arr, size, key);
    int total = (right-left)+1;
    cout<<key<<"-> "<<total<<endl;
        cout<<"\n";
        T_case--;
    }

    return 0;
}
