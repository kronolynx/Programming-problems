#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
// Include headers as needed

using namespace std;

struct Node{
    char ch;
    Node *next;
};

class My_stack{
    public:
        My_stack(){
            node = NULL;
        }
        void push(char ch){
            if(node == NULL){
                node = new Node;
                node->ch = ch;
            }else{
                Node *temp = node;
                node = new Node;
                node->ch = ch;
                node->next = temp;
            }
        }
        char top(){
            return node->ch;
        }
        
        void pop(){
            if(node != NULL){
                Node *temp = node;
                node = node->next;
                delete(temp);
            } 
        }
        
        bool is_empty(){
            return node == NULL;
        }
        
    private:
        Node *node;
};

int get_operator_weight(char ch){
    int weight;
    if(ch == '*' || ch == '/')
        weight = 2;
    else 
        weight = 1;
    
    return weight;
}

bool has_higher_precedence(char op1, char op2){
    return get_operator_weight(op1) >= get_operator_weight(op2);
}

bool is_operator(char ch){
    return ch == '+' || ch == '-' || ch == '*' || ch == '/' ;
}

string postfix_convert(string str){
    My_stack stk;
    string result = "";
    
    for(unsigned int i = 0; i < str.length(); i++){
        
        if(str[i] == '('){
            stk.push(str[i]);
        }else if(str[i] == ')'){
            while(!stk.is_empty() && stk.top() != '('){
                result += stk.top();
                stk.pop();
            }
            stk.pop(); 
                
        }else if(!is_operator(str[i])){ 
            result += str[i];
            
        }else if(is_operator(str[i])){
          
            while(!stk.is_empty() && stk.top() != '(' &&  has_higher_precedence(stk.top(),str[i])){
                result+= stk.top();
                stk.pop();
            }
            stk.push(str[i]);
        }    
    }
    while(!stk.is_empty()){
        result += stk.top();
        stk.pop();
    }
    return result;
}

int main()
{
    string str;
    int cases;
    cin >> cases;
    getline(cin , str);
    while(cases--){
        getline(cin, str);
        cout << postfix_convert(str) << endl;
    }
    return 0;
}
