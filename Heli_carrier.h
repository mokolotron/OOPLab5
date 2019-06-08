#pragma once
#include "Carrier.h"
class Heli_carrier :
	public Carrier
{
	int area_lenght;
	int area_width;
	bool busy;
public:
	Heli_carrier();
	Heli_carrier(int _area_lenght,int _area_with, bool _busy,
		string _escadra, string _crew_name,							//Carrier
		float _speed, float _weight, int _capacity, int _cargo_capacity, //boat
		int capacity, int _hie, int _wid, int _len			//AmunDepot
		);
	Heli_carrier(const Heli_carrier& obj);

	void show() override;
	void fill() override;

	void reload() override;

	~Heli_carrier();
};

