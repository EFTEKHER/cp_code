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
      
        
int main()
{
    int arr[]={1,2,3,4,5,6,7,8};

    reverse(arr,arr+8);

    for(int i=0;i<8;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

  next_permutation(arr,arr+8);
      
        for(int i=0;i<8;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    
        prev_permutation(arr,arr+8);
    
        for(int i=0;i<8;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;    
return 0;
}
