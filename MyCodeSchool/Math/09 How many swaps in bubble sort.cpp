#include<iostream>
#include<cstdio>
#include<cmath>
// Include headers as needed

using namespace std;

int bubble_sort(int *arr,int size){
    int flag, swaps = 0;
    
    for(int k = 0; k < size - 1; k++){
        flag = 0;
        
        for(int i = 0; i < size - k - 1; i++){
            if(arr[i] > arr[i + 1]){
                swap(arr[i], arr[i + 1]);
                flag = 1;
                swaps++;
            }
        }
        if(flag == 0) break;
    }
    return swaps;
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
        
        cout << bubble_sort(arr, size) << endl;
        
        
    }
    // Return 0 to indicate normal termination
    return 0;
}

