/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
void print_asc(int num)
{
    if(num==0)
    {
        cout<<0<<" ";      // insted of using else,we can aslo write 'return' in if block even though function is void type.
    }
    else        
    {
      print_asc(num-1);
      cout<<num<<" ";
    }  
}

void print_desc(int num)
{
     if(num>=0)
     {
         cout<<num<<" ";
         print_desc(num-1);
     }
}
int main()
{
    //print_desc(10);
    print_asc(10);
    return 0;
}
