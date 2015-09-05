#include<iostream>
#include<cstdio>
#include<cmath>
// Include headers as needed

using namespace std;

int selection_sort(int *arr,int size){
    int min, counter = 0;  
    for(int i = 0; i < size - 1; i++){
        min = i;
        for(int k = i + 1; k < size; k++){
            
            if(arr[k] < arr[min]){
                min = k;      
            }
        }
        if(min != i){
            counter++;
            swap(arr[min], arr[i]);
        }
    }
    return counter;
}


int main()
{
    // Write your code here
    int cases, n;
    cin >> cases;
    while(cases--){
        int size;
        cin >> size;
        int arr[size];
        
        for(int i = 0; i < size; i++){
            cin >> n;
            arr[i] = n;
        }
        
        cout << selection_sort(arr, size) << endl;
        
        
    }
    
      // Return 0 to indicate normal termination
    return 0;
}
