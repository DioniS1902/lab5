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
	Fight(string first, string second) {
		srand(time(NULL));
		int health_one = rand() % 100 + 50, damagePerAttack_one = rand() % 10 + 10;
		Fighter one(first, health_one, damagePerAttack_one);

		int health_two = rand() % 100 + 50, damagePerAttack_two = rand() % 10 + 10;
		Fighter two(second, health_two, damagePerAttack_two);
		fight(one, two);
	}

	~Fight() {}

private:
	void fight(Fighter& one, Fighter& two) {
		one.coutInfo();
		two.coutInfo();
		while (true)
		{
			if (one.isDamageGive(two) == false) { one.win(); break; }
			if (two.isDamageGive(one) == false) { two.win();  break; }
		}
	}
};