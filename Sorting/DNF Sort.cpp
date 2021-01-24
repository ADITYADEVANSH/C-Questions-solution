

#include <iostream>

using namespace std;

void DNF( int arr[] , int n)   // koi bhi 3 nos. ki array ko sort karne ke liye
{                              // isme hum sief 0,1,2 nos ki array ko sort kar rahe hai 
    int low = 0;       
    int mid = 0;
    int high = n-1;   int temp;         
     
    while(mid<=high)   // mid bhadta rahega, jab tak vo high se chota hai 
    {
        if(arr[mid]==0)  // if this is true,then swap low with mid and low++. this way, we wil ne sure that 0 will be before 1 or 2
        {
            arr[mid] = arr[low];            
            arr[low] = 0 ;
            low++;
        }
        else if(arr[mid]==1)
        {
            
        }
        else if(arr[mid]==2) // if this is true,then swap high with mid and high--. this will make sure that 2 is always after 0 or 2
        {
            arr[mid] = arr[high];
            arr[high] = 2;
            high--;
        }
        
        mid++;
    }
}

int main()
{
    int arrayy[] = {2,1,0,0,1,2,1};
    DNF(arrayy ,7);
    
    for(int i=0 ; i<7 ; i++)
    {
        cout<<arrayy[i]<<endl;
    }
    return 0;
}
