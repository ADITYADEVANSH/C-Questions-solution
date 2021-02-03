#include <iostream>
#include <vector>

using namespace std;


vector<int> CountSort( int arr[] , int n)   
{                               
     int val=0;
     for( int i=0 ; i<n ; i++)
     {
         val = max(val,arr[i]);    // val mai max vilue aa jaygi, pure array mai se
     }
     
     
     vector<int> count(val+1 , 0);      // agr mai 0 na bhi likhu to bhi vo sabhi mai 0 initialize kar dega
     
     for( int i=0 ; i<n ; i++)
     {
         count[ arr[i] ]++;     //count array mai hum store kar rahe hai ki kon kon si values hai array mai aur kitni bar hai
     }
     
     
     vector<int> position(val+1 , 0);
     
     for(int i=0 ; i<val+1 ; i++) //here we will sum up all the values till index 'i' in count array and store them in position aaray 
     {                         //is se hume ye pata chal jayega ki konsa value of arr array ki konsi position hogi sorted array mai
         if(i==0)
         {
             position[i] = count[i];  // 0th element mai to kuch sum karna hi nahi hai kyoki us se pahele koi element hi nahi hai
         }
         else
         {
             position[i] = position[i-1] + count[i];
         }
     }
     
     vector<int> sol(n);
     
     for(int i=0 ; i<n ; i++)        //PAHELE yaha ERROR thi because I used 'position[ arr[i]]-1' instead of '--position[ arr[i]]'
     {
         sol[ --position[ arr[i]]  ] = arr[i]; //  /* Yha mai add karte time sidha loop chala raha hu aur sorted array aa raha hai, par ye tareeka sorting stablity ko comprise 
     }                                         // kar deta hai agar sorting stablity comprimise nahi karni to last se loop chalao question array mai aur uske refrence se karo kaam. */
     
     return sol;
}

int main()
{
    int arrayy[] = {4,2,1,3,7,3,6,9,3,1};
    vector<int> v;
    v = CountSort(arrayy ,10);
    
    for(auto i : v)
    {
        cout<<i;
    }
    return 0;
}
