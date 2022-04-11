/*
WEEK 3
I. Given an unsorted array of integers, design an algorithm and a program to sort the array using
insertion sort. Your program should be able to find number of comparisons and shifts ( shifts -
total number of times the array elements are shifted from their place) required for sorting the array.
*/

#include <iostream>
using namespace std;
void Insert_sort(int arr[], int size, int &comp, int &shift)
{

    int temp, j;
    for (int i = 1; i < size; i++)
    {
        comp++;
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
            shift++;
            comp++;
        }
        arr[j + 1] = temp;
    }
}

void display(int arr[], int size, int comp, int shift)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << "Shifts->" << shift;
    cout << endl
         << "Comparisons ->" << comp << endl;
}
int main()
{
    int arr[] = {-23, 65, -31, 76, 46, 89, 45, 32};
    int n = sizeof(arr) / sizeof(arr[0]);
    int comp = 0, shift = 0;
    Insert_sort(arr, n, comp, shift);
    display(arr, n, comp, shift);
    return 0;
}
