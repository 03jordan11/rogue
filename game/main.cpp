#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "Character.cpp"

using namespace std;

Character battle(Character* player, Character* enemy);

int main(){
	Character ted("ted", 100, 5, 5, 10);
	Character bob("bob", 100, 5, 5, 10);
	battle(&ted, &bob);
	printf("The character's name is %s. Below are his stats:\n", ted.getName().c_str());
	printf("Health: %d\nAttack: %d\nDefense: %d\nSpeed: %d\n", ted.getHealth(), ted.getAttPower(), ted.getDefPower(), ted.getSpeed());
	return 0;
}

Character battle(Character* player, Character* enemy){
	if (player->getAttPower() >= enemy->getDefPower()){
		enemy->takeDamage(player->getAttPower());
	}
	if(player->getDefPower() <= enemy->getAttPower()){
		player->takeDamage(enemy->getAttPower());
	}
}