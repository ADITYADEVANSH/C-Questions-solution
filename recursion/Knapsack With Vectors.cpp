/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

int result=0;

void func(int netval , int netweight , vector<int> value , vector<int> weight , int maxw)
{
    if(netweight > maxw)
    {
        return;
    }
    else
    {
        result=max(result,netval);
    }
    
    for(int i=0 ; i<weight.size() ; i++)
    {
        vector<int> rosw = weight;
        vector<int> rosv = value;
        
        rosw.erase(rosw.begin() + i);
        rosv.erase(rosv.begin() + i);
        
        func( netval+value[i] , netweight+weight[i] , rosv , rosw , maxw );
    }
}

int main()
{
    func(0 , 0 , { 20, 5, 10, 40, 15, 25 } , {  1, 2,  3,  8,  7, 4 } , 10);
    cout<<result;

    return 0;
}