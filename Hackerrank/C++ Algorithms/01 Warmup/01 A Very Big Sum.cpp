#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int cases, n;
    long long total = 0;
    scanf("%d", &cases);

    while(cases--){
        scanf("%d", &n);
        total+= n;
    }
    printf("%lld", total);
    return 0;
}

