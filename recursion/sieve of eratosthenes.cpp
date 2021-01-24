 #include<iostream>
 #include <bits/stdc++.h>
 using namespace std;
 int main()
 {   
   int num;
   cin>>num;
   int arr[num+1] = {0};
   int po= (int)pow(num,0.5);
   cout<<po<<endl;
  for( int i = 2 ; i <= po ; i++ )
  {
     cout<<"chala bhar wala"<<i<<endl;
      if(arr[i]==0)
      {
          for( int j = i * i ; j <= num ; j += i)
          {
              arr[j] = 1;
          }
      }
  }
   

   for(int k=2 ; k<=num ; k++)
   {
       if(arr[k] == 0)
       {
           cout << k << " ";
       }
       
   }
    return 0;
 }  