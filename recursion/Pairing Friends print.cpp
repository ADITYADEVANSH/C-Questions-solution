/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int count=0;
void func(string str , string ans)
{
    if(str.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    
        func( str.substr(1) , ans+str[0]+"--" );
        
        if(str.length()>=2)
        {
            for(int i=1 ; i<str.length() ; i++)
            {
                func( str.substr(1,i-1)+str.substr(i+1) , ans+str[0]+str[i]+"--" );
            }
        }
    
}

int main()
{
    
    func( "1234" , "");
    //cout<<count;
    return 0;
}

