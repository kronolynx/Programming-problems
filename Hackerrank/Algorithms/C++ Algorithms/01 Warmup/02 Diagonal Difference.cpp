#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin >> n;
    int arr[n][n];
    for(int i = 0; i < n; i++){
        for(int k = 0; k < n; k++){
            cin >> arr[i][k];
        }
    }
    
    int suml = 0, sumr = 0;
    for(int i = 0; i < n; i++){
        suml += arr[i][i];
        sumr += arr[i][n - 1 - i];
    }
    
    cout << abs(suml - sumr) << endl;
    
    return 0;
}


