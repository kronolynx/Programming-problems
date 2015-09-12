#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<stack>
// Include headers as needed

using namespace std;

void reverse_string(string &str){
    stack<char> temp;
    for(int i = 0; i < str.size(); i++){
        temp.push(str[i]);
    }
    for(int i = 0; i < str.size(); i++){
        str[i] = temp.top();
        temp.pop();
    }
}
int main()
{
    // Write your code here
    int cases;
    cin >> cases;
    while(cases--){
        string str;
        cin >> str;
        
        reverse_string(str);
        cout << str << endl;
    }
    // Return 0 to indicate normal termination
    return 0;
}

