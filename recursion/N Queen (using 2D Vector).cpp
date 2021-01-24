/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

bool IsSafe( vector< vector<int> > board , int curRow , int curCol , int n)     
{
    for( int i=curRow , j=curCol ;    j >= 0 && i>= 0 ;    i-- , j--)   // for checking diagonally back
    {
        if(board[i][j] == 1)
        {
            return false;
        } 
    }
     
    for( int i=curRow , j=curCol ;    j<n && i>=0 ;    i-- , j++ )   // for checking diagonally forward
    {
        if(board[i][j] == 1)
        {
            return false;
        } 
    }
    
    for( int i=curRow-1 ;  i >= 0 ;  i--)   // for checking directly upward
    {
        if(board[i][curCol] == 1)
        {
            return false;
        }
    }

    return true;
}


void func( vector< vector<int> > board , int n , int curRow , string ans)
{
    if(curRow==n)             
    {           // this will make sure that only those configuration are printed in which we are able to place queens in all n rows
        cout<<ans+"." <<endl;
        return;
    }
    for( int i=0 ; i<n ; i++)                    // this is for iterating through rows
    {                                              // to place the queen at all the safest columns of that row
        if( IsSafe(board , curRow , i , n) )                         // to check if the place is safe for queen or not
        {
            board[curRow][i] = 1;     //puting queen when column is safe and moving to next row
            func(board , n , curRow+1 , ans + char(curRow+'0') + "-" + char(i+'0')+ " , ");
            board[curRow][i] = 0;    //removing queen to when going back, so that we can put queen in other safe column of that row
        }
    }
}



int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector< vector<int> >v1( n , vector<int>(n,0) );

    func(v1 , n , 0 , "");
    return 0;
}
