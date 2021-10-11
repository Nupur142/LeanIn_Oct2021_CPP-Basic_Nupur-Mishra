#include<iostream>
using namespace std;
 
 int main()
 {
     int a,b,temp;
     cout<< "Enter value of 'a' ";
     cin>>a;
     cout<< "Enter value of 'b' ";
     cin>>b;
     temp=a;
     a=b;
     b=temp;
     cout<<"Value of 'a' after swapping"<<endl<<a<<endl;
     cout<<"Value of 'b'after swapping"<<endl<<b<<endl;
     
     return 0;
 }
 /*Enter value of 'a' 3
Enter value of 'b' 7
Value of 'a' after swapping
7
Value of 'b'after swapping
3*/