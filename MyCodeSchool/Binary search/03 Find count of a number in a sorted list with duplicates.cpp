#include<iostream>
#include<cstdio>
#include<cmath>
// Include headers as needed

using namespace std;

int binary_find(int *arr, int size, int val, bool first){
    int lo = 0, hi = size - 1, mid , result = -1;
    
    while(lo <= hi){
        mid = (hi - lo) / 2 + lo;
        
        if(arr[mid] == val){
            result = mid;
            if(first)
                hi = mid - 1;
            else
                lo = mid + 1;            
        }
        else if(val < arr[mid]) hi = mid - 1;
        else lo = mid + 1;
    }
    return result;
}

int main()
{
    int cases;
    cin >> cases;
    while(cases--){
        int size, val;
        cin >> size >> val;
        int arr[size];
        for(int i = 0; i < size;i++){
            cin >> arr[i];
        }
        
        int first = binary_find(arr , size, val, true);
        if(first == -1 )
            cout << 0 << endl;
        else
            cout << binary_find(arr, size, val, false) - first + 1 << endl;
    }
}

