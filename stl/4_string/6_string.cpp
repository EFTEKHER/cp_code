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

char *mystrtok(char *s,char delim){
    static char *input=NULL;
    if(s!=NULL){
        input=s;
    }
    if(input==NULL){
        return NULL;
    }
    int i=0;
    char *output=new char[strlen(input)+1];
    for(;input[i]!='\0';i++){
        if(input[i]!=delim){
           output[i]=input[i];
         
        }
        else{
            output[i]='\0';
            input=input+i+1;
            // cout<<input<<endl;
            return output;
        }
    }
    output[i]='\0';
    input=NULL;
    return output;
    
}      
        
int main()
{
    char s[100]="Today is a rainy day";
    char *ptr=mystrtok(s,' ');
    while (ptr!=NULL)
    {
        cout<<ptr<<endl;
        ptr=mystrtok(NULL,' ');
    }
    
        
return 0;
}
