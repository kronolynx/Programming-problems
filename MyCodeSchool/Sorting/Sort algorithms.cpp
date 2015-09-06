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
