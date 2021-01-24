#include <iostream>

using namespace std;

int flag=0;

int check(int arr[] , int n , int val)
{
    if(n==0)
    {
        return ( (arr[0]==val) && n );
    }
    
    
    int pre = check( arr , n-1 , val );
    
    
    if( (pre != 0) && (flag == 0) )   // kahi choti si error hai kyoki last ouccerence 2 bar print ho raha hai 
    {
        cout<<"First ouccerence "<<n-1<<endl;
        flag++;
    }
    
    if( (pre != 0) && (flag == 1) )
    {
         cout<<"last ouccerence "<<n-1<<endl;
    }
    
    return ( (arr[n]==val) && n );
}

int main()
{
    int arr[] = {1,4,2,3,6,5,2,8,10};
    int i = check(arr,8,2);

    return 0;
}
