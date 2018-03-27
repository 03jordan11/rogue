#include <stdio.h>
#include <stdlib>
#include <math.h>
#include <string.h>

class Character{
private:
	string name;
	int health, attPower, defPower, speed;
	
public:
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
	
	
}