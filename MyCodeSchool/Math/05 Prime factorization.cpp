#include<iostream>
#include<cstdio>
#include<cmath>
#include<vector>
// Include headers as needed

using namespace std;

void prime_factorization(int n){
    int count;
    for(int i = 2; i <= sqrt(n); i++){
        count = 0;
        while(n % i == 0){
            count++;
            n /= i;
        }
        if(count > 0){
            cout << i << "^" << count;
            if(n > 1) cout << "*";
        }
    }
    if(n > 1) {
        cout << n << "^1";
    }
    cout << endl;
    
    
    
}

int main()
{
    int cases, number;
    cin >> cases;
    while(cases--){
        cin >> number;
        prime_factorization(number);
    }
    // Return 0 to indicate normal termination
    return 0;
}

