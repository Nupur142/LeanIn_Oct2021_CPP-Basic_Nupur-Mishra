#include <iostream>
using namespace std;
int main( )
{
    int Array[2][2][4];
cout << "Please enter 16 values of your choice: \n";
for(int i = 0; i < 2; i++)
{
for (int j = 0; j < 2; j++)
{
for(int k = 0; k < 4; k++ )
{
cin >> Array[i][j][k];}
}
}
cout<<"\n Below are the values you have stored in the array"<< endl;
for(int i = 0; i < 2; i++)
{
for (int j = 0; j < 2; j++)
{
for(int k = 0; k < 4; k++)
{
cout << "[" << i << "][" << j << "][" << k << "] =" <<
Array[i][j][k] << endl;
}
}
}
}
/*
Please enter 16 values of your choice: 
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16

 Below are the values you have stored in the array
[0][0][0] =1
[0][0][1] =2
[0][0][2] =3
[0][0][3] =4
[0][1][0] =5
[0][1][1] =6
[0][1][2] =7
[0][1][3] =8
[1][0][0] =9
[1][0][1] =10
[1][0][2] =11
[1][0][3] =12
[1][1][0] =13
[1][1][1] =14
[1][1][2] =15
[1][1][3] =16  */