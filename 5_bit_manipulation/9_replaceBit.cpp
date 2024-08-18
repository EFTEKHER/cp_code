/*
code written by Eftekher Ali Efte from Bangladesh 
 email:eftekherali2000@gmail.com
pursuing computer science and engingeering in Ruet 
*/
#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<stdlib.h>
#define ull unsigned long long int
#define ll long long int
#include<ctype.h> 
using namespace std;
void clearBitchange(int &n,int i,int j)
{
    int mask=(~0)<<(j+1);
    int mask2=(1<<i)-1;
    mask=mask|mask2;
    n=(n&mask);
}  

void replacebit(int &n,int m,int i ,int j)
  {
    clearBitchange(n,i,j);
   int mask=m<<i;
    n= (n|mask);
  }      
int main()
{

   int n=1000000000;
   int m=10101;
    int i=2;
    int j=6;
    replacebit(n,m,i,j);
    cout<<n<<endl;

return 0;
}
