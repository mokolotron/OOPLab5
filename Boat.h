#pragma once
class Boat
{
	float speed;
	float weight;
	int capacity;
	int cargo_capacity;

public:
	Boat();

	float get_speed();
	float get_weight();
	float get_capacity();
	float get_cargo_capacity();

	void set_speed(float _speed);
	void set_weight(float _weight);
	void set_capacity(float _capcity);
	void set_cargo_capacity(float _cargo_capacity);
	
	~Boat();
};

