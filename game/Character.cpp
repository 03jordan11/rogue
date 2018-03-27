#include "Character.h"

Character::Character(string name, int health, int attPower, int defPower, int speed){
	setName(name); setHealth(health); setAttPower(attPower); setDefPower(defPower); setSpeed(speed);
}
	string Character::getName(){return this->name;}
	int Character::getHealth(){return this->health;}
	int Character::getAttPower(){return this->attPower;}
	int Character::getDefPower(){return this->defPower;}
	int Character::getSpeed(){return this->speed;}
	
	void Character::setName(string name){this->name = name;}
	void Character::setHealth(int health){this->health = health;}
	void Character::setAttPower(int attPower){this->attPower = attPower;}
	void Character::setDefPower(int defPower){this->defPower = defPower;}
	void Character::setSpeed(int speed){this->speed = speed;}
	
	int Character::takeDamage(int damage){
		setHealth(getHealth() - damage);
		return getHealth();
		}