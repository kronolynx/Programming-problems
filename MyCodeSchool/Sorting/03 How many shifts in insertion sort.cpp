#include<iostream>
#include<cstdio>
#include<cmath>
// Include headers as needed

using namespace std;
int insertion_sort(int *arr, int size){
    int counter = 0;
    
    for(int i = 1; i < size; i++){
        int position = i;
        int value = arr[i];
        while(position > 0 && arr[position - 1] > value){
            arr[position] = arr[position - 1];
            position--;
            counter++;
        }
        if(arr[position] != value){
            arr[position]= value;
            counter++;
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
        
        cout << insertion_sort(arr, size) << endl;
        
        
    }
    // Return 0 to indicate normal termination
    return 0;
}


//the next one sorts the array swaping the values, doesn't give the right result
//for my code school for example for {10 9 8 7 6 5 4 3 2 1} uses 45 swaps instead 
//of  54 shifts
#include<iostream>
#include<cstdio>
#include<cmath>
// Include headers as needed

using namespace std;
int insertion_sort(int *arr, int size){
    int counter = 0;
    
    for(int i = 1; i < size; i++){
        int position = i;
        while(position > 0 && arr[position - 1] > arr[position]){
            swap(arr[position - 1], arr[position]);
            position--;
            counter++;
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
        
        cout << insertion_sort(arr, size) << endl;
        for(int i = 0; i < size; i++)
            cout << arr[i] << " " ;
        cout << endl;
        
    }
    // Return 0 to indicate normal termination
    return 0;
}

