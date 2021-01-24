/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

string code[] = {"","a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};

void func(string str , string ans)
{
    if(str.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    
    char ch = str[0];
    string ros=str.substr(1);

    if( (ch-'0')>0 && (ch-'0')<=21 )
    {
        func( ros , ans+code[ch-'0'] );  //instead of using code array , we can do like : char code = 'a' + ( (ch-'0')-1 );  
    }                                      // to get the corresponding alphabet
    else
        return;
        
    
    if(str.length()>=2)
    {
        int i = ch-'0';
        i = i*10;
        ch=str[1];
        i = i + (ch-'0');
        ros=str.substr(2);
    
        if( i>0 && i<=26 )
        {    
            func( ros , ans+code[i] );   //instead of using code array , we can do like : char code = 'a' + (i-1); 
        }                                 // to get the corresponding alphabet
        else
            return;
    }    
    
}

int main()
{
    
    func( "123" , "");
    return 0;
}

