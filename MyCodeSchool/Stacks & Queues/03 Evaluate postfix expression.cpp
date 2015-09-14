#include<iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
// Include headers as needed

using namespace std;
struct Node{
  double n;
  Node *next;
};

class My_stack{
    public:
        My_stack(){
            node = NULL;
        }
        void push(double n){
            if(node == NULL){
                node = new Node();
                node->n = n;
                node->next = NULL;
            }
            else
            {
                Node *temp = node;
                node = new Node();
                node->n = n;
                node->next = temp;
            }
        }
        
        double top(){
            return node->n;
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

double eval_postfix(string str){
    My_stack stk;
    double temp;
    double total;
    for(unsigned int i = 0; i < str.length(); i++){
        if(str[i] >= '0' && str[i] <= '9'){
            stk.push(str[i] - '0');
            }else{
            switch(str[i]){
                case '+':
                    temp = stk.top();
                    stk.pop();
                    total = stk.top() + temp;
                    stk.pop();
                    stk.push(total);
                    break;
                case '-':
                    temp = stk.top();
                    stk.pop();
                    total = stk.top() - temp;
                    stk.pop();
                    stk.push(total);
                    break;
                case '*':
                    temp = stk.top();
                    stk.pop();
                    total = stk.top() * temp;
                    stk.pop();
                    stk.push(total);
                    break;
                case '/':
                    temp = stk.top();
                    stk.pop();
                    total = stk.top() / temp;
                    stk.pop();
                    stk.push(total);
                    break;
                default:
                    stk.pop();
            }
            
        }
    }
    total = stk.top();
    stk.pop();
    return total;
}

int main()
{
    string str;
    int cases;
    cin >> cases;
    getline(cin, str);    
    while(cases--){
        
        getline(cin, str);
        cout << fixed << setprecision(6) << eval_postfix(str) << endl;
    }
    
    return 0;
}

