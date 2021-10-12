#include<iostream>

using namespace std;
 
 int main()
 {
     int x;
     cout<< "Enter a number ";
     cin>>x;
     cout<<"Number entered by the user"<<endl<<x<<endl;
       cout<<x++<<endl;
       cout<<++x<<endl;
       cout<<x--<<endl;
       cout<<--x<<endl;
     return 0;
 }
/*Enter a number 10
Number entered by the user
10
10
12
12
10*/