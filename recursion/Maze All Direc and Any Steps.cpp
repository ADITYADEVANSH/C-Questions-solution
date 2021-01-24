/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
#include<string>
using namespace std;

void func(int row , int column , string ans)
{
 
    if(row < 1 || column < 1)
    {
        return;
    }
    
    if(row == 1 && column == 1)
    {
        cout<<ans<<endl;
        return;
    }
    
    for(int i=1 ; i<3 ; i++)   // kyoki har bar vo kisi bhi direction mai ya to 1 ya to 2 ya to 3 steps le sakta hai
    {
            func(row-i , column , ans+to_string(i)+"N ");     // N for niche
        
            func(row , column-i , ans+to_string(i)+"F ");    // F for front
        
            func(row-i , column-i , ans+to_string(i)+"D ");   // D for diagonally   
    }
}


int main()
{
    func(3,3,"");
 
    return 0;
}
