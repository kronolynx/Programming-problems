#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int temp ,querie;
    vector<int>::iterator it;

    cin >> temp;  // number of ints to be read
    vector<int> v(temp);
    for(int i = 0; i < temp; i++){
        scanf("%d", &v[i]);
    }
    cin >> temp;  // number of queries
    for(int i = 0; i < temp; i++){
        scanf("%d", &querie);
        it = lower_bound(v.begin(), v.end(), querie);
        printf((*it == querie)? "Yes %d\n":"No %d\n" ,(it - v.begin())  + 1);
    }
    return 0;
}

