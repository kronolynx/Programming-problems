#include <iostream>
#include <string>
using namespace std;

string decent_number(int fives , int threes = 0){
    if(fives < 0)
        return "-1";
    if(fives % 3 == 0 && threes % 5 == 0)
        return string(fives, '5') + string(threes, '3');
   return decent_number(fives - 5, threes + 5);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;  
        cin >> n; 
        cout << decent_number(n) << endl;
    }
    return 0;
}