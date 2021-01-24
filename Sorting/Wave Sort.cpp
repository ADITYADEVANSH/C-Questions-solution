

#include <iostream>

using namespace std;

void WaveSort( int arr[] , int n)   
{                               
    int temp = 0;
    
    for( int i=1 ; i<n ; i=i+2)
    {
        if( arr[i] > arr[i-1] )
        {
            temp = arr[i];
            arr[i] = arr[i-1];
            arr[i-1] = temp;
        }
        
        if( arr[i] > arr[i+1] && (i+1)<n )
        {
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
}

int main()
{
    int arrayy[] = {1,2,3,4};
    WaveSort(arrayy ,4);
    
    for(int i=0 ; i<4 ; i++)
    {
        cout<<arrayy[i]<<endl;
    }
    return 0;
}
