#include "Carrier.h"

Carrier::Carrier()
{
	escadra = "def escadra";
	crew_name = "def name";
	Boat();
	AmunDepot();
	Airport();

}

Carrier::Carrier(string _escadra, string _crew_name, 
				float _speed, float _weight, int _capacity, int _cargo_capacity, 
				int capacity, int _hie, int _wid, int _len, 
				int _air_len, int _air_wid, string _status)
{	escadra = _escadra;
	crew_name = _crew_name;
	Boat(_speed, _weight, _capacity, _cargo_capacity);
	AmunDepot(_capacity, _hie, _wid, _len );
	Airport(_air_len, _air_wid, _status);
}

void Carrier::show()
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
	Airport::fill();
	AmunDepot::fill();
	Boat::fill();

	
}


Carrier::~Carrier()
{
}
