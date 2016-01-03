#include <iostream>
using namespace std;

int main()
{
    int cases;
    scanf("%d",&cases);
    while (cases--){
    	int n, x;
    	scanf("%d %d", &n, &x);
    	int friends[n];
    	for(int i = 0; i < n; i++){
    		scanf("%d", &friends[i]);
    	}
    	bool can_invite = false;
    	int acc = 0;
    	int start = 0;
    	for(int i = 0; i < n ; i++){
    		acc += friends[i];
			while(acc > x){
				acc -= friends[start++];
			}
			if(acc == x){
    			can_invite = true;
    			break;
    		}
    	}
    	printf("%s\n", can_invite ? "YES" : "NO");
    	
    }
    return 0;
}

