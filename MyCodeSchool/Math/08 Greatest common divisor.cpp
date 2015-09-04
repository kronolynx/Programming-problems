#include<iostream>
#include<cstdio>
#include<cmath>
// Include headers as needed

using namespace std;

int euclidean_gcd(long a, long b){

    long remainder;
    while(b > 0){
        remainder = a % b;
        a = b;
        b = remainder;       
    }
    return a;  
}

int main()
{
    // Write your code here
    int cases;
    long a, b;
    cin >> cases;
    
    while(cases--){
        cin >> a >> b;
        
        cout << euclidean_gcd(a,b) << endl;
          
    }
    
    // Return 0 to indicate normal termination
    return 0;
}

