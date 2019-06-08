#include "Carrier.h"

Carrier::Carrier()
{
	escadra = "def escadra";
	crew_name = "def name";
}

Carrier::Carrier(string _escadra, string _crew_name,
	float _speed, float _weight, int _capacity, int _cargo_capacity,
	int capacity, int _hie, int _wid, int _len,
	int _air_len, int _air_wid, string _status) :
		Boat(_speed, _weight, _capacity, _cargo_capacity),
		AmunDepot(capacity, _hie, _wid, _len),
		Airport(_air_len, _air_wid, _status)
{
	escadra = _escadra;
	crew_name = _crew_name;
}

Carrier::Carrier(const Carrier& obj):Boat(obj),AmunDepot(obj),Airport(obj) 
{
	escadra = obj.escadra;
	crew_name = obj.crew_name;
}


 void Carrier:: show()
{
	cout << "crew_name = " << crew_name << " escadra = " << escadra;
	cout<<endl << "Boat propereties:";
	Boat::show();
	cout << endl << "Airport propereties:";
	Airport::show();
	cout << endl << "Amunition Depoth propereties:";
	AmunDepot::show();
}

void Carrier::fill()
{
	cout << "crew name : "; cin >> crew_name;
	cout << "escadra : "; cin >> escadra;

	Airport::fill();
	AmunDepot::fill();
	Boat::fill();

}


void Carrier::reload()
{
	cout << endl << "airpalnes weapeson are reloaded";
}

Carrier::~Carrier()
{
}
