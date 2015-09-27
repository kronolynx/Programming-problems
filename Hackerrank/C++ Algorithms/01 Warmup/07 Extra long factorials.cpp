#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr(200,0);
	int nfact, carry, digitCounter;


    cin >> nfact;
    arr[0] = 1;  
    digitCounter = 1;    

    carry = 0; 
    for (int i = 1; i <= nfact; i++) {
        for (int j = 0; j < digitCounter; j++) {

            arr[j] = arr[j] * i + carry; 
            carry = arr[j] / 10; 
            arr[j] = arr[j] % 10; 

        }
        while (carry) {
            arr[digitCounter] = carry % 10;
            carry = carry / 10;
            digitCounter++; 
        }
    }

    for (int i = digitCounter - 1; i >= 0; i--) {
		cout << arr[i];
	}

	return 0;
}

