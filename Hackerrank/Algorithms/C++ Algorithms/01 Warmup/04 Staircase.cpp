#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int size;
    cin >> size;
    for(int i = 1; i <= size; i++){
        for(int j = size; j > 0; j--){
            cout << ((j <= i) ? "#" : " ");
        }
        cout << endl;
    }
    return 0;
}

