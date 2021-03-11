
#include <algorithm>
#include <iostream>
#include <limits.h>
using namespace std;

int func(int n , int steps , int AnsBank[] )   /* 'n' is total number of stairs , and 'steps' are the steps taken so far */
{
 
    if(n==0)
    {
        return steps;      /* jab pahuch gaya to 'steps' aise ke aise hi return kar de taki hum compare kar sake */
    }
    
    if(n<0)
    {
        return INT_MAX;     /* jab pahucha hi nahi to max return kar do coz we dont want useless cases to affect our min case */
    }
    
    
    int sol1 , sol2;
    
    
    if(AnsBank[n - 1] != 0)  
    {
        sol1 = AnsBank[n - 1] + 1;     /* +1 kyoki n-1 jaane ke liye bhi took 1 step  */
    }
    else
    {
        sol1 = func(n-1 , steps + 1 , AnsBank);
        sol1 = sol1 - steps;
    }
    
    
    
    if(AnsBank[n - 2] != 0)
    {
        sol2 = AnsBank[n - 2] + 1;    /* +1 kyoki n-2 jane ke liye bhi ek step liya hai */
    }
    else
    {
        sol2 = func(n-2 , steps + 1 , AnsBank);
        sol2 = sol2 - steps;
    }
    

    AnsBank[n] = min( sol1 , sol2 );  /* 'AnsBank' only stores ki nth position se 0 pe jane ke liye kitne min steps */
    
    sol1 = sol1 + steps;       
    sol2 = sol2 + steps;           /* is stair tak pahuchne ke saare step added for complete solution */
    
    return min(sol1,sol2);
}
 

int main()
{
    int arr[7]={0,0,0,0,0,0,0};
    int a = func(6,0 , arr );
    cout<<a;

    return 0;
}




/*   ******************UNDO**********   */
