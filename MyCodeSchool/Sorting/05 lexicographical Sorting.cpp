#include<iostream>
#include<cstdio>
#include<cmath>
#include<stdlib.h>
// Include headers as needed

using namespace std;

void print_arr(string *arr,int size){
    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int partition(string *arr, int start, int end){
    int index = start;
    swap(arr[end], arr[(rand() % (end - start)) + start]); //randomize pivot
    string pivot  = arr[end]; 
    
    for(int i = start; i < end; i++){
        if(arr[i] <= pivot){
            swap(arr[i], arr[index]);
            index++;
        }
    }
    swap(arr[index], arr[end]);
    return index;
}

void quick_sort(string *arr, int start, int end){
    if(start < end){
        int partition_index = partition(arr, start, end);
        quick_sort(arr, start, partition_index - 1);
        quick_sort(arr, partition_index + 1, end);
    }
}

void quick_sort(string *arr, int size){
       quick_sort(arr, 0, size - 1);
}

int main()
{
    // Write your code here
    int cases;
    cin >> cases;
    while(cases--){
        int size;
        cin >> size;
        string arr[size];
        for(int i = 0; i < size;i++){
            cin >> arr[i];
        }
        
        quick_sort(arr, size);
        
        print_arr(arr, size);
    }
    
    return 0;
}

