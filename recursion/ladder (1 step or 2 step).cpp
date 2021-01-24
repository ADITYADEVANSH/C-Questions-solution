/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void func(int ladder , int ans)
{
    if(ladder < 0)
    {
        return;
    }
    
    if(ladder == 0)
    {
        cout<<ans<<endl;
        return;
    }
    
    func(ladder-1 , (ans*10)+1);
    func(ladder-2 , (ans*10)+2);
}

int main()
{
    func(4,0);

    return 0;
}
