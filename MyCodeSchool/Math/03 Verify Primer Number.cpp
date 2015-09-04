#include<iostream>
#include<cstdio>
#include<cmath>
// Include headers as needed

using namespace std;

bool is_prime(int n){
    if(n < 2){
        return false;
    }
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main()
{
    // Write your code here
    
    int cases, number;
    scanf("%d", &cases);
    while(cases--){
        scanf("%d", &number);
        printf("%s\n", is_prime(number)? "PRIME":"NOT PRIME");
    }
    
    // Return 0 to indicate normal termination
    return 0;
}

