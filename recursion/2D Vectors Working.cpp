/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

void func(vector< vector<int> > vec)  //gfkfd
{
    for(auto r : vec)
    {
        for( auto i : r)
        {
            cout<<i<<endl;
        }
    }
}

int main()
{
    vector< vector<int> > v1;
    
    for( int i=1 ; i<3 ; i++)
    {
        vector<int> row;
        
        for( int k=1 ; k<4 ; k++)
        {
            row.push_back(k);
        }
        
        v1.push_back(row);
    }
    
    // cout<<v1.size() <<" " <<v1[0].size()<<endl;
    // v1[0][1] = 67;
    // cout<<v1[0][1];
    
    func(v1);
    return 0;
}
