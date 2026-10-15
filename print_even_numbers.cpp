// 3. Write a code that will print even numbers from 1 to N.

#include <iostream>
using namespace std;

int main()
{
	int limit;

	cout << "Enter a number: ";
	cin >> limit;

	cout << endl << "Even numbers from 1 to " << limit << ":" << endl;
	for (int count = 1; count <= limit; count++) {
		if (count % 2 == 0) {
			cout << count << "  ";
		}
	}

	return 0;
}
