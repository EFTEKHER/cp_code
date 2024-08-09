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
    char s[100]="Today,is a rainy,day";
    char *ptr=strtok(s,",");

    while(ptr!=NULL)
    {
        cout<<ptr<<endl;
        ptr=strtok(NULL," ");
    }
        
return 0;
}
