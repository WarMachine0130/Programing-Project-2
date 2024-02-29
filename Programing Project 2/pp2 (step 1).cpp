#include <iostream>

using namespace std;

int main() 
{
	int baseHeight;
	int baseWidth;

	cin >> baseHeight;
	cin >> baseWidth;

	for (int i = 0; i < baseHeight; i++) {
		for (int j = 0; j < baseWidth; j++) {
			cout << "*";
		}
		cout << endl;
	}
}
