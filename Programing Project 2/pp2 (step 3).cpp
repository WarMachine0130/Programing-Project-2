#include <iostream>

using namespace std;

int main()
{
	int baseHeight;
	int baseWidth;
	int arrowHead;

	cin >> baseHeight;
	cin >> baseWidth;
	cin >> arrowHead;

	while (true) {
		if (arrowHead > baseWidth) {
			break;
		}
		cin >> arrowHead;
	}

	for (int i = 0; i < baseHeight; i++) {
		for (int j = 0; j < baseWidth; j++) {
			cout << "*";
		}
		cout << endl;
	}

	for (int i = 0; i < arrowHead; i++) {
		for (int j = 0; j < arrowHead - i; j++) {
			cout << '*';
		}
		cout << endl;
	}
}
