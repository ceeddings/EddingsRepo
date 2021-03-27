#include <iostream>
#include <string>

using namespace std;
int main() {
	string earth = "will be overridden";
	string earth1 = "will also be overridden";
	string earth2 = earth + earth1;
	cout << "input sentence";
	cin >> earth;
	cin >> earth1;
	char var;
	cout << "Would you like to concatenate?";
	cin >> var;
	if (var == 'y')
		earth2 = earth + earth1;
	cout << earth2;

}