/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

vector<string> func(string str)
{
    vector<string> net;
    
    if(str.length()==0)
    {
        net.push_back("");
        return net;
    }
    
    for( int i=0 ; i<str.length() ; i++ )
    {
        char ch = str[i];
        string back = str.substr(0,i);
        string front = str.substr( i+1 , str.length() );
        
        string ros = back + front;
        
        vector<string> baki = func(ros);
        
        for( string val : baki)
        {
            net.push_back(ch + val);
        }
        
    }
    
    return net;
}

int main()
{
    
    vector<string> res = func("ABC");
    
    for( string st : res )
    {
        cout<<st<<endl;
    }
    return 0;
}
