#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int actual_year, actual_month, actual_day , return_year, return_month, return_day;
    
    cin >> actual_day >> actual_month >> actual_year ;
    cin >> return_day >> return_month >> return_year;
    
    if(actual_year > return_year)
        cout << 10000 << endl;
    else if(actual_year == return_year && actual_month > return_month)
        cout << 500 * (actual_month - return_month);
    else if (actual_year == return_year && actual_month == return_month && actual_day > return_day)
        cout << 15 * (actual_day - return_day);
    else
        cout << 0 ;
        
    return 0;
}
