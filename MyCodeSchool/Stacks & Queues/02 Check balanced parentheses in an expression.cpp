#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
// Include headers as needed

using namespace std;


class my_stack{
      
    public:
    
    my_stack(){
        index = -1;
    }
    
    void push(char x){
        index++;
        arr[index] = x;
    }
    
    char top(){
        return arr[index];      
    }
    
    void pop(){
        index--;
    }
    
    bool is_empty(){
        return index == -1 ;
    }
    
    private:   
    char arr[100];
    int index;
    
};

string check_balance(string str){
    my_stack stk;
    for(unsigned int i = 0; i < str.size(); i++){
        if(str[i] == '(' || str[i] == '{' || str[i] == '['){
            stk.push(str[i]);
        }
        if(str[i] == ')' || str[i] == '}' || str[i] == ']'){
            if(str[i] == ')' && stk.top() == '(' ||
               str[i] == '}' && stk.top() == '{' ||
               str[i] == ']' && stk.top() == '['){
                   stk.pop();
            } else {
                return "NO";
            }
        }
    }
    return stk.is_empty() ? "YES" : "NO";
}


int main()
{
  
    int cases;
    cin >> cases;
    while(cases--){
        string str;
        cin >> str ;
        cout << check_balance(str) << endl;
           
    }
    
    return 0;
}

