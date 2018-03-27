#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <iostream>

using namespace std;

class Character{
private:
	string name;
	int health, attPower, defPower, speed;
	
public:
	Character(string name, int health, int attPower, int defPower, int speed);
	
	string getName();
	int getHealth();
	int getAttPower();
	int getDefPower();
	int getSpeed();

	void setName(string name);
	void setHealth(int health);
	void setAttPower(int attPower);
	void setDefPower(int defPower);
	void setSpeed(int speed);
	
	int takeDamage(int damage);				//RETURNS HEALTH
	
protected:
	
	
};