#include<iostream>
#include<cstdio>
#include<cmath>
// Include headers as needed

using namespace std;

int sum_all_factors(int n){
    int total = 0;
    for(int i = 1; i <= sqrt(n); i++){
        if(i * i == n)
        {
            total+= i;
        }
        else if(n % i == 0){
            total+= i + n / i;
        }
    }
    return total;
}

int main()
{
    // Write your code here
    int cases, number;
    scanf("%d", &cases);
    while(cases--){
        scanf("%d", &number);
        printf("%d\n", sum_all_factors(number));
    }
    // Return 0 to indicate normal termination
    return 0;
}

