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
	for(int i = num ; i > 0 ; i--){
		for(int j = num ; j > 0 ; j--){
			if( i >= j )
				cout << "*";
			else
				cout << " ";

		}
		cout << endl;
	}
	return 0;
}
