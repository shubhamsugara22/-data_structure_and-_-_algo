// C++ program for implementation of selection sort  
#include <bits/stdc++.h> 
using namespace std;   
void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
  
void selectionSort(int arr[], int n)  
{  
    int i, j, i_min;  
  
    // One by one move boundary of unsorted subarray  
    for (i = 0; i < n-1; i++)  
    {    
        //i_min = i;  
        for (j = i+1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                i_min = j;  
                swap(&arr[i], &arr[i_min]);
            }  
        }
    }      
}  
void printArray(int arr[], int size)  
{  
    int i;  
    for (i=0; i < size; i++)
    {  
        cout << arr[i] <<endl;
    }  
}   
//program to test above functions  
int main()  
{  
    //cout<<"enter the  no . of element"<<endl;
    //cin>>n;
    //cout<<"entr the elements in array"<<endl;
    //for(int i =0;i<n;i++)
    //{
       // cin>>a[i];
    //}
    int arr[] = {64, 25, 12, 22, 11};  
    int n = sizeof(arr)/sizeof(arr[0]);  
    selectionSort(arr, n);  
    cout << "Sorted array: \n";  
    printArray(arr, n);  
    return 0;  
}