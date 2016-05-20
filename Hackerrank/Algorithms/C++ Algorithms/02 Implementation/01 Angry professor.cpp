#include <cstdio>

using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, k, arrival, counter = 0;
        scanf("%d %d", &n, &k);
        for(int i = 0; i < n; i++){
            scanf("%d", &arrival);
            if(arrival <= 0)
                counter++;
        }
        printf("%s\n", counter >= k ? "NO" : "YES");
    }
    return 0;
}