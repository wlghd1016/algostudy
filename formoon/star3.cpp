/*
입력: 5
출력:
*****
****
***
**
*
*/
#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;
	for(int i = 1 ; i <= num ; i++){
		for(int j = num ; j > 0 ; j--){
			if( j >= i )
				cout << "*";

		}
		cout << endl;
	}
	return 0;
}
