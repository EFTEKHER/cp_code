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
{ int arr[]={10,20,30,40,40,40,50,60,70,80,90};
  int n=sizeof(arr)/sizeof(arr[0]);
  auto it=lower_bound(arr,arr+n,41);
  cout<<"lower bound of 40 is "<<arr[it-arr]<<endl;
  auto it2=upper_bound(arr,arr+n,40);    

  cout<<"upper bound of 40 is "<<arr[it2-arr]<<endl;  

  cout<<"occurence of 40 is:"<<it2-it<<endl;
  if((it-arr)==n)
  {
    cout<<"Element is not present "<<endl;
  }
  else{
    cout<<"Element is present "<<endl;
  }
return 0;
}
