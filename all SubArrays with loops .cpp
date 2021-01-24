/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void subArray(int arr[], int n)
{
    // choose the width/window of each iteration (MOTAPPA)
	for (int i=1; i <= n; i++)
	{
		
        // shuru se akhir tak us window/width ke liye calayenge
		for (int j=0; (j+i)<=n; j++)
		{
           int flag=i;
           
           // har ek nukmber ke liye uske motappe/window tak ke numbers
			for (int k=j;flag>0; flag--)
            {
				cout << arr[k];
                k++;
            } 

			cout << endl;
		}
	}
}

// Driver program
int main()
{
	int arr[] = {1, 2, 3, 4};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << "All Non-empty Subarrays\n";
	subArray(arr, n);
	return 0;
}

