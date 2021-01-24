#include <iostream>

using namespace std;
int temp;
int func(int n)
{
    static int x=0; 
    
    if( n>0 )
    {
        x++;
        //temp = func(n-1);
        //cout<< temp+x <<endl;
        return (func(n-1) + x);
    }
   // cout<<"0"<<endl;
    return 0;
}


int main()
{
   // int val=func(5);
    int num=5;
    int val = func(num);
     cout<<val; 
    return 0;
}