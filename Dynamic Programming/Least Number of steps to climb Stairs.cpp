/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <algorithm>
#include <iostream>
#include <limits.h>
using namespace std;

int func(int n , int steps)   /* 'n' is total number of stairs , and 'steps' are the steps taken so far */
{
    if(n==0)
    {
        return steps;      /* jab pahuch gaya to 'steps' aise ke aise hi return kar de taki hum compare kar sake */
    }
    if(n<0)
    {
        return INT_MAX;     /* jab pahucha hi nahi to max return kar do coz we dont want useless cases to affect our min case */
    }
    
    int sol1 = func(n-1 , steps + 1);
    int sol2 = func(n-2 , steps + 1);
    
    return min(sol1,sol2);
}
 

int main()
{
    int a = func(6,0);
    cout<<a;

    return 0;
}
