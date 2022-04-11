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

int duplicate(int arr[],int n)
{
    int ans = 0;
    for(int i = 0;i<n;i++)
    ans = ans^arr[i];
    for(int i = 1;i<n;i++)
    ans = ans ^ i;
    
    // cout<<"dip -> "<<ans;
    return ans;
}

void Display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
int main()
{
    int arr[] = {75, 66, 1, 65 ,2 ,6 ,86 ,2 ,75, 8};
    int arr1[] = {1,2,3,4,1,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int low = 0, high = n - 1, mid;
    Display(arr, n);
    cout << "\n========= After Merge Sort ========\n";
    // MergeSort(arr, low, high);

    Display(arr, n);
    cout<<"bc"<<duplicate(arr, n);
    //    cout<<"\ndup : "<<ans<<endl;
    // Display(arr, n);
    return 0;
}