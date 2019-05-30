#include "AmunDepot.h"



AmunDepot::AmunDepot()
{
	 capacity = 0;
	 hie = 0;
	 wid = 0;
	 len = 0;
}

AmunDepot::AmunDepot(int _cargo_capacity, int _hie, int _wid, int _len)
{
	set_cargo_capacity(_cargo_capacity);
	set_hie(_hie);
	set_wid(_wid);
	set_len(_len);
}

AmunDepot::AmunDepot(const AmunDepot& obj)
{
	capacity = obj.capacity;
	hie = obj.hie;
	wid = obj.wid;
	len = obj.len;

}

int AmunDepot::get_cargo_capacity() { return capacity; };
int AmunDepot::get_hie() { return hie; };
int AmunDepot::get_wid() { return wid; };
int AmunDepot::get_len() { return len; };

void AmunDepot::set_cargo_capacity(int _crgcpy) {
	if (_crgcpy > 0)
		capacity = _crgcpy;
}

void AmunDepot::set_hie(int _hie)
{
	if (_hie > 0)
		hie = _hie;
}

void AmunDepot::set_wid(int _wid)
{
	if (_wid > 0)
		wid = _wid;
}

void AmunDepot::set_len(int _len)
{
	if (_len > 0)
		len = _len;
}

void AmunDepot:: show()
{
	cout << "lenght = " << len << " width = " << wid << " hieght = " << hie <<" cargo = "<< capacity;
}

void AmunDepot::fill()
{
	cout << "Amunition Depot capacity"; cin >> capacity;
	cout << "Amunition hieght"; cin >> hie;
	cout << "Amunition width"; cin >> wid;
	cout << "Amunition lenght"; cin >> len;
}


AmunDepot::~AmunDepot()
{
}
