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
int twoUnique(vector<int> arr)
{
    int result = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        result = result ^ arr[i];
    }

    int temp = result;
    int pos = 0;
    //last one bit
    while ((temp & 1) == 0)
    {
        pos++;
        temp = temp >> 1;
    }
    int setA = 0;
    int setB = 0;
    int mask = 1 << pos;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] & mask > 0)
        {
            setA = setA ^ arr[i];
        }
        else
        {
            setB = setB ^ arr[i];
        }
    }
    cout << setA << " " << setB << endl;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 3, 1, 2};
    twoUnique(arr);
    return 0;
}
