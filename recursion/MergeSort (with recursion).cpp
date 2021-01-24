/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void MergeSort(int , int , int*);

void merge(int l , int m , int r , int arr[])
{
    int temp;
    
    while( l<m )
    {
        if( arr[m] < arr[l] )   // /* jab middle ke right wali side arry element is smaller then swap it with the element on left 
        {                           /* side of middle, aur phir rght side wale aray ke liye fir se merge sort chala do */
            temp = arr[l];
            arr[l] = arr[m];
            arr[m] = temp;
            MergeSort(m , r , arr);
        }
        
        // if( arr[m] == arr[l] )   /* this will run when middle and the element on the left index are same
        // {
        //     temp==arr[l];           //ise lagake bhi theek chalega par bina usle bhi sahi chalega
        //     arr[l] = arr[m];
        //     arr[m] = temp;
            
        // }
        
        l++;
    }
}

void MergeSort(int l , int r , int arr[])
{
    if(l==r)
    {
        return;
    }
    
    int m = (r+l)/2; 
    MergeSort(l , m , arr);         /*  ek baar aadhe ko sort kiya  */
    MergeSort(m+1 , r , arr);        /* agli baar agle aadhe ko sort kiya */
    
    merge(l , m+1 , r , arr);           /* dono aadhe sorted array ko merge kar diya */
}

int main()
{
   
    int arr[] = {1,4,3,2,2,10};
    
    MergeSort(0 , 5 , arr);
    
    for( int i=0 ; i<6 ; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
