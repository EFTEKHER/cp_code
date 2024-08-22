/*
code written by Eftekher Ali Efte from Bangladesh
 email:eftekherali2000@gmail.com
pursuing computer science and engingeering in Ruet
*/
#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
#include <stdlib.h>
#define ull unsigned long long int
#define ll long long int
#include <ctype.h>
using namespace std;
// unique fun->updatesumbit()->return bi

void updatesum(vector<int> &sumArr, int x)
{
    for (int i = 0; i<32; i++)
    {
        int ithbit = x & (1 << i);
        if (ithbit)
        {
            sumArr[i]++;
        }
    }
}
int values(vector<int> &sumArr)

{
    int num = 0;
    for (int i = 0; i < 32; i++)
    {
        num += sumArr[i] * (1 << i);
      
    }
    return num;
}
int uunique(vector<int> &arr)
{
    vector<int> sumArray(32, 0);
    for (int x : arr)
    {
        updatesum(sumArray, x);
    }
    for (int i = 0; i < 32; i++)
    {
        cout << sumArray[i] << " ";
    }
    for (int i = 0; i < 32; i++)
    {
        sumArray[i] = sumArray[i] % 3;
    }
    return values(sumArray);
}

int main()
{
    vector<int> arr = {2, 2, 3, 2, 3, 3, 12};
    cout << uunique(arr) << endl;

    return 0;
}
