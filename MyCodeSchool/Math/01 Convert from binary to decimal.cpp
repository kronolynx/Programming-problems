/**
    starting from the back
**/
#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
// Include headers as needed

using namespace std;

int main()
{
    // Write your code here
    
    int cases;
    string number;
    scanf("%d", &cases);
    
    while(cases--){
        cin >> number;
        int decimal = 0;
        int power = 1;
        
        for(int i = number.size(); i > 0; i--){
            int digit = number[i - 1] - '0';
            decimal += digit * power;
            power *= 2;
        }
        printf("%d\n", decimal);
    }
    
    return 0;
}


/**
    better starting from the front, doubling the amount
   
**/
#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
// Include headers as needed

using namespace std;

int main()
{
    // Write your code here
    
    int cases;
    string number;
    scanf("%d", &cases);
    
    while(cases--){
        cin >> number;
        int decimal = 0;
        
        for(int i = 0; i < number.size(); i++){
            int digit = number[i] - '0';
            decimal = decimal * 2 + digit;
        }
        printf("%d\n", decimal);
    
    }
    
    return 0;
}
