#include <iostream>
using namespace std;

int partition(int *arr, int start, int end){
	int index = start;
	swap(arr[end], arr[(rand() % (end - start)) + start]);
	int pivot = arr[end];
	
	for(int i = start; i < end; i++){
		if(arr[i] >= pivot){
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
	quick_sort(arr, 0, size - 1);
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--){
    	int n;
    	scanf("%d", &n);
    	int arr[n];
    	for(int i = 0; i < n; i++){
    		scanf("%d", &arr[i]);
    	}
    	
    	quick_sort(arr, n);
    	for(int i = 0; i < n; i++){
    		printf("%d ", arr[i]);
    	}
    	printf("\n");
    }
    return 0;
}