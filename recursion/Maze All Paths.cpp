/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void func(int row , int column , string ans)
{
 
    
    if(row == 1 && column == 1)
    {
        cout<<ans<<endl;
        return;
    }
    
    if(row != 0)            // ye kyoki maine general base case nahi lagaya to seperately check karna pada 0 ke liye
    {
        func(row-1 , column , ans+"D");
    }
    if(column != 0)         // ye kyoki maine general base case nahi lagaya to seperately check karna pada 0 ke liye
    {
        func(row , column-1 , ans+"F");
    }
        
}

int main()
{
    func(3,3,"");
 
    return 0;
}
