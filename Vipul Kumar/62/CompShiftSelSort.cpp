#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void Sort(int arr[],int n,int *comp)
{
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        // c++;
        for(int j=i+1;j<n;j++)
        {
            (*comp)++;
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            swap(arr[i],arr[min]);
        }
    }
}

void Display(int arr[],int n,int swaps,int comp)
{
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<"\nComparisons-> "<<comp<<endl;
    cout<<"Swaps-> "<<swaps<<endl;
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
        int arr[size],swaps=size-1,comp=0;
        cout << "Enter elements : " << endl;
        for (int i = 0; i < size; i++)
            cin >> arr[i];
        Sort(arr,size,&comp);
        Display(arr,size,swaps,comp);
        cout<<"\n";
        T_case--;
    }
}