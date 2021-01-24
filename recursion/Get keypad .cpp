/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

string keypad[] = {"", "", "abc", "def", "ghi", "jkl","mno", "pqrs", "tuv", "wxyz"};

void func(string num , string ans)
{
    
    if(num.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    // if(str.length()==0)
    // {
    //     return;
    // }
    char ch = num[0];
    string ros = num.substr(1);
    string str = keypad[ch-'0'];
    
    for(int i=0 ; i < str.length() ; i++)
    {
        func(ros , ans+str[i] );
    }
}


int main()
{
    cout<<"Hello World"<<endl;
    
    func("23" , "");

    return 0;
}
