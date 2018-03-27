#include "Character.h"

Character::Character(string name, int health, int attPower, int defPower, int speed){
	this.name = name; this.health = health; this.attPower = attPower; this.defPower = defPower; this.speed = speed;
}

	string getName(){return name;}
	int getHealth(){return health;}
	int getAttPower(){return attPower;}
	int getDefPower(){return defPower;}
	int getSpeed(){return speed;}
	
	
	string getName(){return this.name;}
	int getHealth(){return this.health;}
	int getAttPower(){return this.attPower;}
	int getDefPower(){return this.defPower;}
	int getSpeed(){return this.speed;}
	
	void setName(string name){this.name = name;}
	void setHealth(int health){this.health = health;}
	void setAttPower(int attPower){this.attPower = attPower;}
	void setDefPower(int defPower){this.defPower = defPower;}
	void setSpeed(int speed){this.speed = speed;}
	
	int takeDamage(int damage){
		this.health = this.health - damage;
		return this.health;
		}