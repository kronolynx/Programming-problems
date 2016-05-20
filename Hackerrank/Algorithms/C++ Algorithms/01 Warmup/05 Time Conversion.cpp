#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;



int main() {
       
    int hours, minutes, seconds;
    string period;
    cin >> setw(2) >> hours;
    cin.ignore(); 
    cin >> setw(2) >> minutes; 
    cin.ignore(); 
    cin >> setw(2) >> seconds >> period;
      
    cout << setfill('0');
    if(period == "PM")
        cout << setw(2) << (hours != 12 ? hours + 12 : hours) ;
    else
        cout << setw(2) << (hours != 12 ? hours : 0);
        
    cout << ":" << setw(2) << minutes << ":" << setw(2) << seconds << endl;
        
    return 0;
}
