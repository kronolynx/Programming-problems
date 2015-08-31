#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    vector<int> v;
    int x, y;
    cin >> x;
    while(x--){
        cin >> y;
        v.push_back(y);
    }
    cin >> x;
    v.erase(v.begin() + --x );
    cin >> x >> y;
    v.erase(v.begin() + --x, v.begin() + --y);   
    cout << v.size() << endl;
    for(int i : v)
        cout << i << " ";
    return 0;
}

