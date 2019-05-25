#include "Airport.h"

Airport::Airport()
{
	len = 0;
	wid = 0;
	status = "open";
}

Airport::Airport(int _len, int _wid, string _status)
{
	set_lenght(_len);
	set_width(_wid);
	status = _status;
}

Airport::Airport(const Airport& obj)
{
	len = obj.len;
	wid = obj.wid;
	status = obj.status;
}

int Airport::get_lenght() { return len; };
int Airport::get_width() { return wid; };
string Airport::get_status() { return status; }

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


void Airport::open(bool o)
{
	if (o) status = "open";
	else status = "close";
}

Airport::~Airport()
{
}
