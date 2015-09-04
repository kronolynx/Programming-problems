#include<iostream>
#include<cstdio>
#include<cmath>
#include<vector>
#include<algorithm>
// Include headers as needed

using namespace std;

void decimal_to_binary(int n){
        
        vector<char> binary;
        
        if(n == 0) binary.push_back(n);
        
        while(n > 0){
            binary.push_back(n % 2);
            n /= 2;
        }
        reverse(binary.begin(), binary.end());
        for(int i = 0; i < binary.size(); i++){
            printf("%d", binary[i]);
        }
        printf("\n");
}

int main()
{
    // Write your code here
    int cases;
    scanf("%d",&cases);
    
    while(cases--){
        int n = 0;
        scanf("%d", &n);
        decimal_to_binary(n);
    }
    
    // Return 0 to indicate normal termination
    return 0;
}

