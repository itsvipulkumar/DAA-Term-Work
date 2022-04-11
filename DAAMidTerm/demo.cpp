#include<iostream>
using namespace std;
int main()
{
int arr[] = {2,3,4,5,5,7};
int i, dupe = 0;
for (i = 0; i < 6; i++) {
    dupe = dupe ^ arr[i] ^ i;
}
printf ("%d\n",arr[dupe]);
return 0;
}