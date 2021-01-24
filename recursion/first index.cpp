#include <iostream>

using namespace std;

int start=0;

int func(int arr[] , int val , int i)
{
    if(start==i)
    {
        return -1 ;
    }
    if(arr[start] == val)
    {
       
        return start+1;
    }
     int num=0;
     start++;
     num = func(arr , val , i);
     //num=num*10;
    return num;
}

int main()
{
    int arr[] = {3,6,5,7,3,4,5,3,9};
    int val = func(arr , 9 , 9);
    cout<<val;
    return 0;
}
