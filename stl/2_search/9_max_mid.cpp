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
     int a=10;
     int b=20;
     int arr[]={10,20,30,40,50,60,70,80,90};
     
     int n=sizeof(arr)/sizeof(int);
     reverse(arr,arr+n);
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }   
return 0;
}
