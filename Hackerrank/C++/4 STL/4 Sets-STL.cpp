#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int num_queries, querie, temp;
    set<int> st;
    cin >> num_queries;
    for(int i = 0; i < num_queries; i++){
        scanf("%d %d", &querie, &temp);
        if(querie == 1)
            st.insert(temp);
        if(querie == 2)
            st.erase(temp);
        if(querie == 3)
            printf((st.find(temp) != st.end())? "Yes\n":"No\n");

    }
    return 0;
}

