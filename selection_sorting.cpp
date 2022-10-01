// Program to sort an array using selection sorting algorithm

#include <iostream>

using namespace std;

int main()
{
    int n; 
    cout << "Enter array elements : ";
    cin >> n;
    int arr[n];

    cout << "Enter array elements \n";
    for(auto &i : arr)
    {
        cin >> i ;
    }

    // 1st logic to selection sort 
    /* for ( int i = 0; i < n-1 ; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                int c = arr[i];
                arr[i] = arr[j];
                arr[j] = c;
            }
        }
    } */

    // 2nd 

    for(int i = 0; i < n-1; i++ )
    {
        int midIndex = i ;
        for ( int j = i + 1; j < n; j ++ )
        {
            if ( arr[j] < arr[midIndex])
                midIndex = j;
        }
        swap ( arr[midIndex] , arr[i]);
    }

    cout << "Array elements : ";
    for (auto i : arr)
        cout << i << " ";

    return 0;
}