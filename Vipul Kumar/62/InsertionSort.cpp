#include <iostream>
using namespace std;
void InsSort(int arr[], int n)
{
    int temp, j;
    for (int i = 1; i < n; i++)
    {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
}
void Display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
int main()
{
    int arr[] = {4, 13, 5, 65, 3, 71, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    Display(arr, n);
    cout << "\n\n ===== \n\n";
    InsSort(arr, n);
    Display(arr, n);
}