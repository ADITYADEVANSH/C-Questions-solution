/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <climits>
using namespace std;

int check( int arr[] , int n)
{
    if(n==0)
    {
        return arr[0] ;
    }

    bool ch = ( arr[n] >= check(arr,n-1) );
    if(ch==false)
    {
        return INT_MAX;
    }
    return arr[n];
}
int main()
{
    int arr[]={1,3,3,4,4,5,6,7,8};
    cout<<(check(arr,7)==arr[7]);
    
    return 0;
}
