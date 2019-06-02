#include <iostream>
using namespace std;
#include <string>
#include "Carrier.h"
#include "Heli_carrier.h"


int main() {
	int input = 1;
		
	cout << "Carrier" << endl;
	Carrier t_carrier;
	t_carrier.fill();
	Carrier carrier(t_carrier);
	cout << endl;
	system("cls");

	cout << "Helicopter Carrier" << endl;
	Heli_carrier t_heli_carrier;
	t_heli_carrier.fill();
	Carrier heli_carrier(t_heli_carrier);
	cout << endl;

	carrier.reload();
	heli_carrier.reload();
	system("pause");

	system("cls");
	while (input != 0) {
		cout << "Press 1 to show Carrier" << endl;
		cout << "Press 2 to show Helicopter carrier" << endl;
		cout << "Press 0 to exit" << endl;
		
		cin >> input;
		switch (input)
		{
		case 1: carrier.show(); break;
		case 2: heli_carrier.show(); break;
		case 0: break;
		default:
			cout << "incorret input" << endl;
			break;
		}
		system("pause");
		system("cls");
	}
	return 0;
}

