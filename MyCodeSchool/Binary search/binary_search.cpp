int binary_search(int *arr, int size, int val){
    int lo = 0, hi = size - 1 , mid;
    
    while( lo <= hi){
        mid = (hi - lo) / 2 + lo;
        if(arr[mid] == val) return mid;
        else if( val < arr[mid]) hi = mid - 1;
        else lo = mid + 1;
    }
    return - 1;
}
