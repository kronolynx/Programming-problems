// Quick sort
int partition(int *arr, int start, int end){
    int index = start;
    swap(arr[end], arr[(rand() % (end - start)) + start]); //randomize pivot
    int pivot  = arr[end]; 
    
    for(int i = start; i < end; i++){
        if(arr[i] <= pivot){
            swap(arr[i], arr[index]);
            index++;
        }
    }
    swap(arr[index], arr[end]);
    return index;
}

void quick_sort(int *arr, int start, int end){
    if(start < end){
        int partition_index = partition(arr, start, end);
        quick_sort(arr, start, partition_index - 1);
        quick_sort(arr, partition_index + 1, end);
    }
}

void quick_sort(int *arr, int size){
       quick_sort(arr, 0, size - 1); // important size - 1
}

// Merge sort
void merge_sort(int *arr, int *temp, int lo, int mid, int hi){
    
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

void merge_sort(int *arr, int *temp, int lo, int hi){
    
    if (hi <= lo) return;
    
    int mid = lo + (hi - lo)/ 2;
    
    merge_sort(arr, temp, lo, mid);
    merge_sort(arr, temp, mid + 1, hi);
    merge_sort(arr, temp, lo, mid, hi);
}

// starting point of merge sort
void merge_sort(int *arr,int size){
    int *temp = new int[size];
    merge_sort(arr,temp, 0, size - 1);
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

// Selection sort
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

// Bubble sort
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
