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

	virtual void show();
	void fill();

	virtual void reload();

	~Heli_carrier();
};

