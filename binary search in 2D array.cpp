/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int r=4 , c=4 , num = 12;
   // cin>>r;
   // cin>>c;
    int li = 0 , lj=0 , hi=r , hj=c , flag=0 , mi , mj;
   
    int arr[4][4]= { { 1,2,3,4} ,
                     {5,6,7,8} ,
                     {9,10,11,12} ,
                     {13,14,15,16}  } ;
                     
     while( (li+lj) <= (hi+hj) )
     {
         mi = li + (hi - li)/2;
         mj = lj + (hj - lj)/2;
         
         if( arr[mi][mj] == num )
         {
             flag = 1;
             break;
         }
         
         if( arr[mi][mj] < num )
         {
             if(lj == (c-1))
             {
                 li++;
                 lj=0;
             }
             else
             {
                 lj++;
             }
         }
         else if( arr[mi][mj] > num )
         {
            if(hj == 0)
             {
                 hi--;
                 hj=(c-1);
             }
             else
             {
                 hj--;
             } 
         }

     }
     
     cout<<flag<<" "<<mi<<" "<<mj;
     
    return 0;
}
