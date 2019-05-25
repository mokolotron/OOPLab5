#pragma once
class AmunDepot
{
	int cargo_capacity;
	int hie;
	int wid;
	int len;

public:
	AmunDepot();
	AmunDepot(int _cargo_capacity, int _hie, int _wid, int _len);
	AmunDepot(const AmunDepot &obj);
	int get_cargo_capacity();
	int get_hie();
	int get_wid();
	int get_len();

	void set_cargo_capacity(int _crgcpy);
	void set_hie(int _hie);
	void set_wid(int _wid);
	void set_len(int _len);

	~AmunDepot();
};

