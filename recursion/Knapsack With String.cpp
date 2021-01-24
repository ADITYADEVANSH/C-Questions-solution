/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int result=0;

void func(int netval , int netweight , string value , string weight , int maxw)
{
    if(netweight > maxw)
    {
        return;
    }
    else
    {
        result=max(result,netval);
    }
    
    for(int i=0 ; i<weight.length() ; i++)
    {
        string rosw = weight.substr(0,i) + weight.substr(i+1);
        string rosv = value.substr(0,i) + value.substr(i+1);
        
        func( netval+(value[i]-'0') , netweight+(weight[i]-'0') , rosv , rosw , maxw );
    }
}

int main()
{
    func(0 , 0 , "12345" , "58231" , 100);
    cout<<result;

    return 0;
}
