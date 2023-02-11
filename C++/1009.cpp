#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	
	int N, a, b, temp = 1;
	
	cin >> N;
	
	for (int i = 0; i < N; i++) {
		cin >> a >> b;
	
		for (int j = 0; j < b; j++) {
			temp = (temp * a) % 10;
		}
		
		if (temp == 0) {
			cout << "10\n";
		} else {
			cout << temp << "\n";
		}
		temp = 1;
	}
	
	return 0;
}