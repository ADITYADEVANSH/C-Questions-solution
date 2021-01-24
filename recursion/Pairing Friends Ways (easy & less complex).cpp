/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;


int func(int friends)
{
    if(friends==0 || friends==1 || friends==2)  // 0 friends ko pair karne ke zero tareeke hai
    {                                            // 1 friend ko friend karne ka sirf ek tareeka hai i.e. leaving him single
        return friends;                //aur 2 friends ko pair karne ke 2 tareeke hai i.e. leave them single aur pair them
    }
    
    return func(friends-1) + func(friends-2)*(friends-1); //ek bar hum usko single leke chalayenge recursion aur ek bar pair karke
                            // aur fir dono ko add kar dengem, raki ye pta chal jaaye ki total kitne tareeko se pair kar sakte hai
} //aur pairing ko multiply islye kar rahe hai kyoki jab hum pairing karenge to humare pas nth friend ko pair karne ke n-1 ways hai
                    // aur total ways jann ne ke liye hu inhe sum kar denge
int main()
{
    
    cout<<func(4);
    return 0;
}

