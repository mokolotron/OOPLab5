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
	int get_lenght();
	int get_width();
	string get_status();

	void set_status(string _status);
	void set_lenght(int _lenght);
	void set_width(int _width);
	Airport();
	~Airport();
};

