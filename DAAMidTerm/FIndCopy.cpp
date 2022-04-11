/*  WEEK 2
I. Given a sorted array of positive integers containing few duplicate elements, design an algorithm
and implement it using a program to find whether the given key element is present in the array or
not. If present, then also find the number of copies of given key. (Time Complexity = O(log n))
*/
#include<iostream>
using namespace std;

int FindCopy(int arr[],int n,int key)
{
    int low=0,high=n-1,mid,c=0;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (key == arr[mid])
            {
                return mid;
                
            }
        else if (key > arr[mid])
        {
            low = mid + 1;
        }
        else if (key < arr[mid])
            high = mid;
           
    }
   
   
    
    return -1;
}
int main()
{
    int T_case,size,key;
    cout<<"Number of Test Cases : ";
    cin>>T_case;
    while(T_case!=0)
    {
        cout<<"Enter the size of array : ";
        cin>>size;
        int arr[size];
        cout<<"Enter elements : "<<endl;
        for(int i=0;i<size;i++)
        cin>>arr[i];
        cout<<"enter key : ";
        cin>>key;
         int ans=FindCopy(arr,size,key);
        
        
         if(ans==-1)
         {
             cout<<"Not Present "<<endl;
         }
         else{
             cout<<key<<" "<<ans<<endl;
             {
                 
                 
                 
                     cout<<key<<"->"<<((size-ans))<<endl;
                 
             }
         }
         T_case--;
    }
   
    return 0;
}