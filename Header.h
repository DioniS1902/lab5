#pragma once
#include <string>
#include <iostream>
#include <random>
#include <time.h>   

using namespace std;

class Fighter
{
public:
	Fighter(string name, int health, int damagePerAttack) :name(name), health(health), damagePerAttack(damagePerAttack) {}
	~Fighter() {}

	void win() {
		cout << name << " won his health : " << health;
	}

	void coutInfo() {
		cout << "Fighter:" << endl << "	Name : " << name << endl << "	Health : " << health << endl << "	Damage : " << damagePerAttack << endl;
	}

	bool isDamageGive(Fighter& oponent) {
		oponent.health -= damagePerAttack;
		if (oponent.health <= 0) {
			return false;
		}
		else {
			return true;
		}
	}

private:

	string name;
	int health, damagePerAttack;
};


class Fight
{
public:
	Fight(string firstFighterName, string secondFighterName) {
		srand(time(NULL));
		int firstFighterHealth = rand() % 100 + 50, firstFighterDamagePerAttack = rand() % 10 + 10;
		Fighter firstFighter(firstFighterName, firstFighterHealth, firstFighterDamagePerAttack);

		int secondFighterHealth = rand() % 100 + 50, secondFighterDamagePerAttack = rand() % 10 + 10;
		Fighter secondFighter(secondFighterName, secondFighterHealth, secondFighterDamagePerAttack);
		fight(firstFighter, secondFighter);
	}

	~Fight() {}

private:
	void fight(Fighter& firstFighter, Fighter& secondFighter) {
		firstFighter.coutInfo();
		secondFighter.coutInfo();
		while (true)
		{
			if (firstFighter.isDamageGive(secondFighter) == false) { firstFighter.win(); break; }
			if (secondFighter.isDamageGive(firstFighter) == false) { secondFighter.win();  break; }
		}
	}
};