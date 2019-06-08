#include "Heli_carrier.h"



Heli_carrier::Heli_carrier()
{
	area_lenght = 0;
	area_width = 0;
	busy = true;
}

Heli_carrier::Heli_carrier(int _area_lenght, int _area_with, bool _busy,
	string _escadra, string _crew_name,
	float _speed, float _weight, int _capacity, int _cargo_capacity,
	int capacity, int _hie, int _wid, int _len) :
	Carrier(_escadra, _crew_name, _speed, _weight, _capacity, _cargo_capacity, capacity, _hie, _wid, _len)
{
	area_lenght = _area_lenght;
	area_width = _area_with;
	busy = _busy;
}

Heli_carrier::Heli_carrier(const Heli_carrier& obj):
	Carrier(obj)
{
	area_lenght = obj.area_lenght;
	area_width = obj.area_width;
	busy = obj.busy;
}


  void  Heli_carrier :: show() 
{
	cout << "area_lenght = " << area_lenght << " area_width = " << area_width<<" busy = "<< busy;
	cout << endl << "Carrier propereties:";
	
	cout << "crew_name = " << crew_name << " escadra = " << escadra;
	cout << endl << "Boat propereties:";
	Boat::show();
	cout << endl << "Amunition Depoth propereties:";
	AmunDepot::show();
}

void Heli_carrier::fill()
{
	cout << "area_lenght : "; cin >> area_lenght;
	cout << "area_width : "; cin >> area_width;
	cout << "busy : "; cin >> busy;
	
	cout << "crew name : "; cin >> crew_name;
	cout << "escadra : "; cin >> escadra;
		
	AmunDepot::fill();
	Boat::fill();
}

void Heli_carrier::reload()
{
	cout<<endl << "helicopter was reloaded" << endl;
}


Heli_carrier::~Heli_carrier()
{

}
