//Write a program of to sort the array using templates
#include <iostream>
using namespace std;

template <class T>
void arry(T arr[], int size) 
{
    T temp;
    cout << "\n\n\n\t Before Sorting...";
    for(int i = 0; i < size; i++) 
    {
        cout << "\n\n\t Array Element [" << i << "] : " << arr[i];
    }
    
    for(int i = 0; i < size; i++) 
    {
        for(int j = i + 1; j < size; j++) 
        {
            if(arr[i] > arr[j]) 
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }	
        }
    }
    
    cout << "\n\n\n\t After Sorting...";
    for(int i = 0; i < size; i++) 
    {
        cout << "\n\n\t Array Element [" << i << "] : " << arr[i];
    }
}

int main() 
{
    int arr[5];
    for(int i = 0; i < 5; i++) 
    {
        cout << "\n\n\t Input array element [" << i << "] : ";
        cin >> arr[i];
    }
    arry(arr, 5);

}
