#include <iostream>
using namespace std;
#include <string>
#include "Carrier.h"


int main() {

	Carrier plavun;
	plavun.show();
	cout << endl;

	plavun.fill();
	cout << endl;
	Carrier plavun2(plavun);
	plavun2.show();
	cout << endl;





	return 0;
}

