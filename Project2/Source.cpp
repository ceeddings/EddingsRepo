#include <iostream>
using namespace std;

class parentZebra {
public:
	int hooves = 4;

	void hasStripes() {
		cout << "The Zebra has Stripes" << endl;
	};
	void hasHooves() {
		cout << "The Zebra has Hooves" << endl;
	};
};

class zebraOne : public parentZebra {
public:
	void nameIs() {
		cout << "Jimmy" << endl;
	};		
};

class zebraTwo : public parentZebra {
public:
	void nameIs() {
		cout << "Johnny" << endl;
	};
};

int main(void) {
	cout << "Press 1 for parentZebra" << endl;
	cout << "Press 2 for zebraOne" << endl;
	cout << "Press 3 for zebraTwo" << endl;
	int choice;
	cin >> choice;

	if (choice == 1) {
		parentZebra myZebra;
		myZebra.hasStripes();
		myZebra.hasHooves();
	}
	else if (choice == 2) {
		zebraOne myZebra;
		myZebra.hasStripes();
		myZebra.hasHooves();
		myZebra.nameIs();
	}
	else if (choice == 3) {
		zebraTwo myZebra;
		myZebra.hasStripes();
		myZebra.hasHooves();
		myZebra.nameIs();
	}
};