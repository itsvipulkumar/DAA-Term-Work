/*
II. Given an already sorted array of positive integers, design an algorithm and implement it using a
program to find whether given key element is present in the array or not. Also, find total number
of comparisons for each input case. (Time Complexity = O(logn), where n is the size of input).
*/

#include <iostream>
using namespace std;
int BinarySearch(int arr[], int low, int high, int key)
{
    while (low <= high)
    {
        int mid = low+(high-low) / 2;
        if (key == arr[mid])
            return mid;
         if (key > arr[mid])
        {
            low = mid + 1;
        }
        else 
            high = mid-1;
    }
    return -1;
}
void Display(int arr[], int n)
{
    cout << "\t\t\t";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
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
        int low=0, high=size-1;
        int ans = BinarySearch(arr,low,high,key);

        if (ans == -1)
        {
            cout << "Not Present " <<size<< endl;
        }
        else
        {
            cout << "Present " <<ans+1<< endl;
           
        }
        cout<<"\n";
        T_case--;
    }

    return 0;
}