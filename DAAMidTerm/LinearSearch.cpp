/*
I. Given an array of nonnegative integers, design a linear algorithm and implement it using a program
to find whether given key element is present in the array or not. Also, find total number of
comparisons for each input case. (Time Complexity = O(n), where n is the size of input)
*/

#include <iostream>
using namespace std;

void LinearSearch(int arr[], int n, int key, int flag)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            flag = 1;
            cout << "Present " << endl;
            cout << "Total Comparisons : " << i + 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Not Present " << endl;
        cout << "Total Comparasion : " << n;
    }
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
        LinearSearch(arr, size, key, 0);
        cout<<"\n";
        T_case--;
    }
}