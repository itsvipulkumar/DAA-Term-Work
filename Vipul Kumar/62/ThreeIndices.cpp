#include <iostream>
using namespace std;
void Indices(int arr[], int n)
{
    int c = 0;
    for (int i = 0; i < n; i++)
        {

            for (int j =n-1; j >i; j--)
            {
                for (int k = 2; k < n; k++)
                {
                    if (arr[i] + arr[j] == arr[k] && i != j)
                    {
                        c++;
                        cout<<i+1<<","<<j+1<<","<<k+1<<endl;
                        k++;
                    }

                }
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