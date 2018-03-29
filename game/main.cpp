#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <string.h>
#include "Character.cpp"
#include <time.h>

using namespace std;

void wait(int seconds);
int roll(int sides);
int battle(Character* player, Character* enemy);	//1 is player victory, 0 is enemy
void enemyEncounter(Character* player);
Character getEnemy(int tile);

int main(){
	Character ted("ted", 100, 5, 5, 10);
	Character bob("bob", 100, 5, 5, 10);
	battle(&ted, &bob);
	printf("The character's name is %s. Below are his stats:\n", ted.getName().c_str());
	printf("Health: %d\nAttack: %d\nDefense: %d\nSpeed: %d\n", ted.getHealth(), ted.getAttPower(), ted.getDefPower(), ted.getSpeed());
	for(int i = 0; i < 20; i++){
		printf("\n%d", roll(100));
		wait(1);
	}
	return 0;
}

int battle(Character* player, Character* enemy){
	
	if (player->getAttPower() >= enemy->getDefPower()){
		enemy->takeDamage(player->getAttPower());
	}
	if(player->getDefPower() <= enemy->getAttPower()){
		player->takeDamage(enemy->getAttPower());
	}
}

void enemyEncounter(Character* player){
	
}

Character getEnemy(){
	//PULL RANDOM ENEMY FROM TEXT FILE HERE
	Character enemy("goblin", 50, 3, 2, 5);
	return enemy;
}

int roll(int sides){
	srand(time(NULL));		//IS IT BETTER TO SEED IN MAIN?
	return rand() % sides + 1;
}

void wait(int seconds){
	clock_t endwait; 
	endwait = clock () + seconds * CLOCKS_PER_SEC ; 
	while (clock() < endwait) {}
}