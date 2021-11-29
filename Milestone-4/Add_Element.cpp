#include <iostream>
using namespace std;
  
// Function to insert x in arr at position pos
int* insertX(int n, int arr[],int x, int pos)
{
    int i;
  
    // increase the size by 1
    n++;
  
    // shift elements forward
    for (i = n; i >= pos; i--)
        arr[i] = arr[i - 1];
  
    // insert x at pos
    arr[pos - 1] = x;
  
    return arr;
}
  

int main()
{
    int arr[100];
    int i, x, pos,n;

     cout<<"Enter the number of elements in array:  ";
     cin>>n;    
  
    cout<<"Enter the elements of the array  ";
    for (i = 0; i<n; i++)
        cin>>arr[i];
  
    cout<<"The original array is:  ";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
  
    cout<<"Enter the element to be inserted:  ";
    cin>>x;
  
    cout<<"Enter the position at which element is to be inserted:  ";
    cin>>pos;
  
    insertX(n, arr, x, pos);
  
    cout<<"The updated array is:  ";
    for (i = 0; i < n + 1; i++)
        cout << arr[i] << " ";
    cout << endl;
  
    return 0;
}
/*
Enter the number of elements in array:  5
Enter the elements of the array  4
8
9
3
2
The original array is:  4 8 9 3 2 
Enter the element to be inserted:  1
Enter the position at which element is to be inserted:  2
The updated array is:  4 1 8 9 3 2  */
