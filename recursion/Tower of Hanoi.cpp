/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void func(char a , char b , char c , int n)
{
    if(n==0)
    {
        return;
    }
    
    func(a , c , b , n-1);
    cout<<n<<" th    "<<a<<" to "<<b << endl;
    func( c , b , a , n-1);
    return;
}

int main()
{
    func('a' , 'b' , 'c' , 5);
    return 0;
}

