#include <iostream>
using namespace std;
void Merge(int arr[], int low, int mid, int high);
void MergeSort(int arr[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;

        MergeSort(arr, low, mid);
        MergeSort(arr, mid + 1, high);
        Merge(arr, low, mid, high);
    }
}
void Merge(int arr[], int low, int mid, int high)
{
    int i = low;
    int j = mid + 1;
    int k = low;
    int B[100];

    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            B[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            B[k] = arr[j];
            j++;
            k++;
        }
    }

    if (i > mid)
    {
        while (j <= high)
        {
            B[k] = arr[j];
            k++;
            j++;
        }
    }
    else
    {
        while (i <= mid)
        {
            B[k] = arr[i];
            k++;
            i++;
        }
    }
    for (i = low; i <= high; i++)
    {
        arr[i] = B[i];
    }
}
int FindDuplicate(int arr[], int size, int flag)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            flag = 1;
            return flag;
        }
    }
    if (flag == 0)
        return -1;
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
        int low = 0, high = size - 1, mid;
        cout << "Enter elements : " << endl;
        for (int i = 0; i < size; i++)
            cin >> arr[i];
        MergeSort(arr, low, high);
        cout << "\n";
        int ans = FindDuplicate(arr, size, 0);
        if (ans == -1)
            cout << "NO" << endl;
        else
            cout << "Yes" << endl;
        cout << "\n";
        T_case--;
    }
    return 0;
}
