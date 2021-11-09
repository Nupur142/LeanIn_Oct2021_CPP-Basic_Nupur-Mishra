#include<iostream>
 
using namespace std;
 
/*
int main()
{
    int n;
    cout<<"Enter value of n ";
    cin>>n;
    int arr[n];
    cout<<"Enter numbers in  the array ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[n];

    } 
    int sum;
    cout<<"Sum of the numbers in the array ";
    for(int i=0;i<n;i++) {
      sum+=arr[i];
   }
   cout<<sum;
    return 0;
}
*/
int main() {
   int i,n,sum=0;
   int arr[]={1,2,3,4,5};
   n=5;
   for(i=0;i<n;i++) {
      sum+=arr[i];
   }
   cout<<"Sum of the numbers in the array ";
   cout<<sum;
   return 0;
}
/*
Sum of the numbers in the array 15 */