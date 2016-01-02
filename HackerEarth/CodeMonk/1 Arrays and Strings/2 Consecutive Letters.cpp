#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    string str;
    cin >> str;
    while(cin >> str){
    	for(int i = 0; i < str.length() - 1; i++){
    		if(str[i] != str[i+1])
    			cout << str[i];
    	}
    	cout << str[str.length() -1] << endl;
    }
    return 0;
}
