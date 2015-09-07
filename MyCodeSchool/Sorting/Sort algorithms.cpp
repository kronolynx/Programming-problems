// merge sorte
void merge(int *arr, int *temp, int lo, int mid, int hi){
    
    for(int i = lo; i <= hi; i++){
        temp[i] = arr[i];
    }
    
    int j = lo , k = mid + 1;
    
    for(int i = lo; i <= hi; i++){
        if(j > mid) arr[i] = temp[k++];
        else if(k > hi) arr[i] = temp[j++];
        else if (temp[j] < temp[k]) arr[i] = temp[j++];
        else arr[i] = temp[k++];
    }
}

void sort_m(int *arr, int *temp, int lo, int hi){
    
    if (hi <= lo) return;
    
    int mid = lo + (hi - lo)/ 2;
    
    sort_m(arr, temp, lo, mid);
    sort_m(arr, temp, mid + 1, hi);
    merge(arr, temp, lo, mid, hi);
}

// starting point of merge sort
void merge_sort(int *arr,int size){
    int *temp = new int[size];
    sort_m(arr,temp, 0, size - 1);
    delete(temp);
}




//Insertion sort
void insertion_sort(int *arr, int size){
       
    for(int i = 1; i < size; i++){
        int position = i;
        while(position > 0 && arr[position - 1] > arr[position]){
            swap(arr[position - 1], arr[position]);
            position--;
        }
    }
}

// selection sort
void selection_sort(int *arr,int size){
    int min;  
    for(int i = 0; i < size - 1; i++){
        min = i;
        for(int k = i + 1; k < size; k++){
            
            if(arr[k] < arr[min]){
                min = k;      
            }
        }
        if(min != i)
            swap(arr[min], arr[i]);
       
    }
}

// bubble sort
void bubble_sort(int *arr,int size){
    int flag;
    
    for(int k = 0; k < size - 1; k++){
        flag = 0;
        
        for(int i = 0; i < size - k - 1; i++){
            if(arr[i] > arr[i + 1]){
                swap(arr[i], arr[i + 1]);
                flag = 1;
            }
        }
        if(flag == 0) break;
    }
}
