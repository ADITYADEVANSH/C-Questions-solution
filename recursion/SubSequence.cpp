/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void func(string str , string ans)
{
    if(str.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    
    char ch = str[0];
    string ros=str.substr(1);
    
    func(ros , ans);
    ans=ans+ch;
    func(ros , ans);
}

int main()
{
    
    func( "abc" , "");
    return 0;
}
