#include<iostream>
#include<cstdio>
#include<cmath>
#include<vector>
#include<sstream>
// Include headers as needed

using namespace std;

int get_decimal_number(string str,int base){
    int number = 0;
    for(int i = 0; i < str.size(); i++)
    {
        if(isalpha(str[i]))
            number = number * base + str[i] - 'A' + 10;
        else
            number = number * base + (str[i] - '0');
    }
    return number;
}

string get_base_x(int decimal, int base){
    vector<int> number;
    
    if(decimal == 0) number.push_back(decimal);
    
    while(decimal > 0){
        number.push_back(decimal % base);
        decimal /= base;
    }
    
    stringstream ss;
    for(int i = number.size(); i > 0 ; i--){
        
        if(number[i - 1] > 9)
            ss << char(number[i - 1] - 10 + 'A');
        else
            ss << number[i - 1];
    }
    
    return ss.str(); 
}

string base_convert(string str, int baseA,int baseB){
    return get_base_x(get_decimal_number(str, baseA), baseB);
}

int main()
{
    // Write your code here
    string number;
    int cases, a, b;
    
    cin >> cases;
    
    while(cases--){
       cin >> number >> a >> b ;
       
        cout << base_convert(number, a, b) << endl;
        
        
    }
    
    // Return 0 to indicate normal termination
    return 0;
}

