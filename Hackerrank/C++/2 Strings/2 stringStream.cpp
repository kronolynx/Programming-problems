#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
   stringstream ss(str);
    char c;
    int n;
    vector<int> parsed;
   while (ss >> n){
       parsed.push_back(n);
       ss >> c;
    }
    return parsed;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}

