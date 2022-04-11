
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int Indices(vector<int> v, int n, int key)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {

        for (int j = i + 1; j < n; j++)
        {
            int diff = v.at(j) - v.at(i);
            if (diff == key)
                count++;
        }
    }
    return count;
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
        vector<int> v(size);
        cout << "Enter elements -> " << endl;
        for (int i = 0; i < v.size(); i++)
            cin >> v.at(i);
        sort(v.begin(), v.end());
        cout << "enter key : ";
        cin >> key;
        int ans = Indices(v, size, key);
        cout << ans << endl;
        T_case--;
    }
    return 0;
}

// === cpp
// #include <iostream>
// using namespace std;

// void Indices(int arr[], int n,int key)
// {
//     int c = 0;
//     for (int i = 0; i < n; i++)
//     {

//         for (int j = i+1; j < n; j++)
//         {
//             int diff=arr[j]-arr[i];
//             if(diff==key)
//             count++;
//         }
//     }

// }
// int main()
// {
//     int T_case, size, key;
//     cout << "Number of Test Cases : ";
//     cin >> T_case;
//     while (T_case != 0)
//     {
//         cout << "Enter the size of array : ";
//         cin >> size;
//         int arr[size];
//         cout << "Enter elements : " << endl;
//         for (int i = 0; i < size; i++)
//             cin >> arr[i];
//             cout<<"enter key : ";
//             cin>>key;
//         Indices(arr, size,key);
//     }
//     return 0;
// }