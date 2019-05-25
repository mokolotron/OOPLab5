#pragma once
class AmunDepot
{
	int cargo_capacity;
	int hie;
	int wid;
	int len;

public:
	AmunDepot();
	int get_cargo_capacity();
	int get_hie();
	int get_wid();
	int get_len();

	void set_cargo_capacity();
	void set_hie();
	void set_wid();
	void set_len();

	~AmunDepot();
};

