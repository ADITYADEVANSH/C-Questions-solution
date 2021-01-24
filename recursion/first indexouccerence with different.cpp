/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int func(int arr[] , int n , int num)
{
    if(n==0)
    {
        return -1;
    }
    if(arr[0] == num)
    {
        return (9-n)+1;
    }
    
    int val = func(arr+1 , n-1 , num);
    //val = val * arr[0];
    return val;
}

int main()
{
    int arr[] = {1,2,4,5,3,5,6,8,6};
    int val = func(arr,9,9);
    cout<<val;
    return 0;
}
