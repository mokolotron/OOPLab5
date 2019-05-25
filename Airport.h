#pragma once
using namespace std;
#include <string>



class Airport
{
private:
	int len;
	int wid;
	string status;
public:
	Airport();
	Airport(int _len, int _wid, string status);
	Airport(const Airport &obj);
	int get_lenght();
	int get_width();
	string get_status();

	
	void set_lenght(int _lenght);
	void set_width(int _width);

	void open(bool o);
	~Airport();
};

