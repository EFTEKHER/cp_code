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
      
const int sz=2;
struct Mat{
    int m[sz][sz];
    Mat(){
        memset(m,0,sizeof(m));
    }
    void identity(){
        for(int i=0;i<sz;i++){
           m[sz][sz]=1;

        }
    }
    Mat operator*(const Mat &a)const{
        Mat r;
        for(int i=0;i<sz;i++){
            for(int j=0;j<sz;j++){
                for(int k=0;k<sz;k++){
                    r.m[i][j]+=m[i][k]*a.m[k][j];
                }
            }
        }
        return r;
    }
};

int  Fib(int n)
{
    Mat res;
    res.identity();
    Mat base;
    base.m[0][0]=base.m[0][1]=base.m[1][0]=1;
    while(n){
        if(n&1){
            res=res*base;
        }
        base=base*base;
        n>>=1;
    }
    return res.m[0][1];
}
int main()
{
        
return 0;
}
