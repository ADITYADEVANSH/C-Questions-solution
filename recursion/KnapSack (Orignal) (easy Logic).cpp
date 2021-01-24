/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

int func(int value[] , int weight[] , int n , int maxWeight)  // n is number of items;
{ 
    if (n == 0 || maxWeight == 0) 
        return 0;
    
    if( weight[n] > maxWeight )  //jab vo item ke khud ka weight hi net weight se bada hai to hum usko bina add kiye call lagayenge
    { 
        return func(value,weight,n-1,maxWeight) ;  
    }
  
   return max( func(value,weight,n-1,maxWeight-weight[n-1]) + value[n] , func(value,weight,n-1,maxWeight) ); // ek bar humne nth item ko add kiya
}                                 // aur ek bar biya add kiye call kiya      // fir dono mai se jo bada hai, use return kar diya
                        //isme '+ value[i]' ki wajah se hi max vala chal raha hai aur ultimately code kaam kar raha hai
       // jab humne usse include kiya hai to, uski value bhi add kar di previous recursive result se aur jab hum usse add nahi karna chahate to '+ value[i]' likhne ka matlab hi nahi banta
int main() 
{ 
    int val[] = { 60, 100, 120 }; 
    int wt[] = { 10, 20, 30 }; 
    int W = 50; 
    int n = sizeof(val) / sizeof(val[0]); 
    cout << func(val , wt , n , W); 
    return 0; 
} 