#pragma once
class Boat
{
	float speed;
	float weight;
	int capacity;
	int cargo_capacity;

public:
	Boat();
	Boat(float _speed, float _weight, int _capacitu, int _cargo_capacity);
	Boat(const Boat &obj);

	float get_speed();
	float get_weight();
	int get_capacity();
	int get_cargo_capacity();

	void set_speed(float _speed);
	void set_weight(float _weight);
	void set_capacity(float _capcity);
	void set_cargo_capacity(float _cargo_capacity);
	
	~Boat();
};

