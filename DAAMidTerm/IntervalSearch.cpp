#include <iostream>
using namespace std;

void LinearSearch(int arr[], int size, int key, int flag)
{
  int low = 0, high = 0, k = 0,count = 0;
  for (int i = 0; i < size; i = 2 * k)
  {

    count=count+1;
    if (key == arr[i])
    {
      flag = 1;
      cout << "Present ->  " << count<< endl;
    }
    else
    {
      if (key > arr[i])
      {
        low = i;
      }
      else if (key < arr[i])
      {
        high = i;
        break;
      }
    }
    k = k + 1;
    // count++;
  }

  // cout<<"flag"<<flag<<endl;
  for (int i = low; i < high; i++)
  {
    flag = flag + 1;
    if (key == arr[i])
    {

      cout << "Present -> " <<count<< endl;
      break;
    }
  }
  if (flag == 0)
  {
 
    cout << "Not Present -> "<<count << endl;
   
  }
}
void Display(int arr[0], int n)
{
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
        LinearSearch(arr, size, key, 0);
        cout<<"\n";
        T_case--;
    }
}