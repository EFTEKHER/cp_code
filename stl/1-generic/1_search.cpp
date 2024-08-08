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
//template <typename T>


template<typename T>

int  search (T arr[],int n,T key)
{
    for(int p=0;p<n;p++){

        if(arr[p]==key)
        {
                    return p;
        }
    }
    return n;

}        
int main()
{
  int a[]={1,2,3,4,10,12};
  int key=10;
  cout<<search(a,sizeof(a)/sizeof(int),key)<<endl; 
  float b[]={1.1,2.2,3.3,4.4,10.1,12.1};
float key1=4.4;
cout<<search(b,sizeof(b)/sizeof(float),key1)<<endl;
return 0;
}
