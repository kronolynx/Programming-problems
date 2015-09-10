#include<iostream>
#include<cstdio>
#include<cmath>
// Include headers as needed

using namespace std;

int find_pairs(int *arr, int size, int val){
    
    int count = 0;
    
    for(int i = 0; i < size; i++){
        int lo = i + 1, hi = size - 1, mid;  
        while( lo <= hi){
            mid = (hi - lo) / 2 + lo;
            if(arr[i] + arr[mid] == val){
                count++;
                break;
            }
            else if(val < arr[mid] + arr[i]) hi = mid - 1;
            else lo = mid + 1;
        }
        
    }
    return count;
}

int main()
{
    int cases;
    cin >> cases;
    while(cases--){
        int size, val;
        cin >> size >> val;
        int arr[size];
        for(int i = 0; i < size; i++){
            cin >> arr[i];
        }
        
        cout << find_pairs(arr, size, val) << endl;
    }
    return 0;
}

