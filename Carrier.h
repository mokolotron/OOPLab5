#pragma once
#include "Boat.h"
#include "Airport.h"
#include "AmunDepot.h"
#include <iostream>
using namespace std;

class Carrier :
	public Boat,
	public AmunDepot,
	private Airport
{
protected:
	string crew_name;
	string escadra;
	
public:
	Carrier();
	Carrier(string _escadra, string _crew_name, 
		float _speed, float _weight, int _capacity, int _cargo_capacity, //boat
		int capacity, int _hie, int _wid, int _len,				//AmunDepot
		int _air_len = 0, int _air_wid = 0, string _status = "close"				//Airport
		);
	Carrier(const Carrier &obj);

	virtual void show();
	virtual void fill();

	virtual void reload();
	~Carrier();
};

