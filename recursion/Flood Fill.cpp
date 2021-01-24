/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

const int mazeRows = 6 ;
const int MazeCol = 7 ;

void func( int maze[][MazeCol] , int row , int col , string ans , bool check[][MazeCol] )
{
    if(row==mazeRows-1 && col==MazeCol-1)
    {
        cout<<ans<<endl;
        return;
    }
    
    if(row<0 || col<0 || row>mazeRows-1 || col>MazeCol-1 || maze[row][col] == 1 || check[row][col] == true)
    {
        return;
    }
   
    check[row][col] = true;
    func( maze , row-1 , col , ans+"T-" , check);
    func( maze , row , col-1 , ans+"L-" , check);
    func( maze , row+1 , col , ans+"D-" , check);
    func( maze , row , col+1 , ans+"R-" , check);
    check[row][col] = false;
}



int main()
{
    int maze[][7]= { {0 , 1 , 0 , 0 , 0 , 0 , 0},
                    {0 , 1 , 0 , 1 , 1 , 1 , 0},  
                    {0 , 0 , 0 , 0 , 0 , 0 , 0},  
                    {1 , 0 , 1 , 1 , 0 , 1 , 1}, 
                    {1 , 0 , 1 , 1 , 0 , 1 , 1},
                    {1 , 0 , 0 , 0 , 0 , 0 , 0} } ;
    
    bool check[][7]= { {false , false , false , false , false , false , false ,},
                      {false , false , false , false , false , false , false ,},
                      {false , false , false , false , false , false , false ,},
                      {false , false , false , false , false , false , false ,},
                      {false , false , false , false , false , false , false ,},
                      {false , false , false , false , false , false , false ,} } ;
                     
    func(maze , 0 , 0 , "" , check);

    return 0;
}
