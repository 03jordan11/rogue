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
	printf("The character's name is %s. Below are his stats:\n", ted.getName().c_str());
	printf("Health: %d\nAttack: %d\nDefense: %d\nSpeed: %d\n", ted.getHealth(), ted.getAttPower(), ted.getDefPower(), ted.getSpeed());
	enemyEncounter(&ted);
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
	Character enemy = getEnemy(1);
	int answer = 1;
	
	printf("You have encountered a %s! ", enemy.getName().c_str());
	while (answer != 0){
		printf("How would you like to proceed?\n");
		printf("1: fight\n2: run");										//will later add a talk option
		cin >> answer;
		if(answer == 1){
			battle(player, &enemy);
			if(player->getHealth() <= 0){
				printf("You have fallen!\n");
				exit(0);
			}
			else if(enemy.getHealth() <= 0){
				printf("You killed it!\n");
				break;
			}
			printf("\nYou have %d health left!", player->getHealth());
		}
		else if(answer == 2){
			if(player->getSpeed() < enemy.getSpeed()){
				printf("The creature if faster than you! You fail to escape and he swipes you for %d damage!", enemy.getAttPower());
				player->takeDamage(enemy.getAttPower());
			}
			else{
				printf("You have succesfully escaped!\n");
				break;
			}
		}
	}
}

Character getEnemy(int tile){
	//PULL RANDOM ENEMY FROM TEXT FILE HERE
	Character enemy("goblin", 50, 20, 2, 5);
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