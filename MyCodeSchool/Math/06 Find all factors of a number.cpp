#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<vector>
// Include headers as needed

using namespace std;

int main()
{
    // Write your code here

    int cases;
    cin >> cases; 
    
    vector<int> factors;
    
    while(cases--){
        int n;
        cin >> n;
        
        for(int i = 1; i <= sqrt(n); i++){
            if(i * i == n)
                factors.push_back(i);
            else if(n % i == 0){
                factors.push_back(i);
                factors.push_back(n / i);
            }
        }
        
        sort(factors.begin(), factors.end());
        
        for(int i = 0; i < factors.size(); i++){
            if(i == factors.size() - 1)
                cout << factors[i] << endl;
            else
                cout << factors[i] << " ";
        }
            
        factors.clear();
    }
    return 0;
}

