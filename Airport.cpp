#include "Airport.h"



Airport::Airport()
{
	len = 0;
	wid = 0;
	status = "open";
}

int Airport::get_lenght() { return len; };
int Airport::get_width() { return wid; };
string Airport::get_status() { return status; }
void Airport::set_status(string _status)
{
	status = _status;
};
void Airport::set_lenght(int _lenght)
{
	if (_lenght > 0)
	len = _lenght;
};
void Airport::set_width(int _width)
{
	if(_width> 0)
	wid = _width;
};


Airport::~Airport()
{
}
