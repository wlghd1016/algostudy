/*
입력: 1 1
출력: MON
*/
#include <iostream>
using namespace std;

int main() {
	int month, day;
	cin >> month;
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
