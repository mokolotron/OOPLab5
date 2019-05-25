#pragma once
#include "Boat.h"
#include "Airport.h"
#include "AmunDepot.h"
class Carrier :
	public Boat,
	public AmunDepot,
	private Airport
{
	string crew_name;
	string number_escadra;
	
public:
	Carrier();


	~Carrier();
};

