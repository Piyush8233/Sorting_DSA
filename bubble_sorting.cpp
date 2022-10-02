// Program to demonstrate bubble sorting 
/*
 Bubble sorting algoritm place the largest value to last position till the smallest element
    After first round we don't need to check last element so 
    second loop will iterate till the n - i times 
*/

#include <iostream>
using namespace std;

int main()
{
    int n ;
    cout << "Enter size of array : ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements : ";
    for (auto &i : arr)
        cin >> i ;
    
    /* 
    for ( int i = 0; i < n-1; i++)
    {
        int index = i ;
        for ( int j = i + 1; j < n; j++)
        {
            if(arr[index] > arr[j])
                swap ( arr[index ] , arr[j]);
            else 
                continue;
        }
    }
    */

   // Another algorithm 


   for ( int i = 1 ; i < n ; i++)
   {    // i for round 1 to n 
        for (int j = 0; j < n-i ; j++)
        {
            // j for compare the value to this above value 
            if(arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
   }


    for (auto i : arr)
        cout << i << " ";
    return 0;
}