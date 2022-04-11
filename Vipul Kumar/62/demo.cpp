#include <iostream>
using namespace std;
void Indices(int arr[], int n)
{
    int c = 0,k=2;
    for (int i = 0; i < n; i++)
    {
        3
        
        for (int j = 1; j < n && k < n; j++)
        { 
            int k = j+1;
            int sum = arr[i] + arr[j];
            if (sum == arr[k])
            {
                
                cout << i + 1 << "," << j + 1 << "," << k + 1 << endl; //24 28 48 71 86 89 92 120 194 201
               
                c++;
            }
             k++;
        }
    }
    if (c == 0)
        cout << "No Sequence found " << endl;
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
        Indices(arr, size);
        T_case--;
    }
    return 0;
}