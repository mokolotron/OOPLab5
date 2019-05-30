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
	string crew_name;
	string escadra;
	
public:
	Carrier();
	Carrier(string _escadra, string _crew_name, 
		float _speed, float _weight, int _capacity, int _cargo_capacity, //boat
		int capacity, int _hie, int _wid, int _len,				//AmunDepot
		int _air_len, int _air_wid, string _status				//Airport
		);

	virtual void show();
	void fill();


	~Carrier();
};

