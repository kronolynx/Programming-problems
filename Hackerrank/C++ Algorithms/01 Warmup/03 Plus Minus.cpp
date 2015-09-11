#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int positive = 0, negative = 0, zero = 0;
    
    int n, temp;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> temp;
        
        if(temp == 0)
            zero++;
        else if(temp < 0)
            negative++;
        else
            positive++;
            
    }
    
    cout << setprecision(3) << fixed << 1.0 * positive / n << "\n" << 1.0 * negative / n << "\n" << 1.0 * zero / n << endl;
    
    return 0;
}

