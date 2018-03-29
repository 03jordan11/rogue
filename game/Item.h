#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std;

class Item{
private:
	string name;
	int rarity;
	//---VARIABLES FOR WEAPONS AND ARMOR ONLY
	int att, def, speed, price;
	//---VARIBLES FOR POTIONS AND FOOD ONLY
	int healthBuff, attBuff, defBuff, speedBuff, duration;

public:
	Item(string name, int rarity, int att, int def, int speed, int price);
	Item(string name, int rarity, int healthBuff, int attBuff, int defBuff, int speedBuff, int duration);

	string getName();
	int getRarity();
	int getAtt();
	int getDef();
	int getSpeed();
	int getPrice();
	
	int getHealthBuff();
	int getAttBuff();
	int getDefBuff();
	int getSpeedBuff();
	int getDuration();
	
	void setName(string name);
	void setRarity(int rarity);
	void setAtt(int att);
	void setDef(int def);
	void setSpeed(int speed);
	void setPrice(int price);
	
	void setHealthBuff(int healthBuff);
	void setAttBuff(int attBuff);
	void setDefBuff(int defBuff);
	void setSpeedBuff(int speedBuff);
	void setDuration(int duration);
	
protected:
};