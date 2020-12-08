#pragma once
#include <string>
#include <iostream>

using namespace std;

class Fighter
{
public:
	Fighter(string name, int health, int damagePerAttack):name(name), health(health), damagePerAttack(damagePerAttack){}
	~Fighter() {}

	bool GivetDamage(Fighter &oponent) {
		return oponent.getDamage(damagePerAttack);
	}

	void win() {
		cout << name << " won his health : " << health;
	}
	
	void coutInfo() {
		cout << "Fighter:" << endl << "	Name : " << name << endl << "	Health : " << health << endl << "	Damage : " << damagePerAttack << endl;
	}

	bool getDamage(int damage) {
		health = health-damage;
		if (health <= 0) {
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
		int health_one = rand() % 100 + 50, damagePerAttack_one = rand() % 100 + 50;
		Fighter one(first, health_one, damagePerAttack_one);

		int health_two = rand() % 100 + 50, damagePerAttack_two = rand() % 100 + 50;
		Fighter two(second, health_two, damagePerAttack_two);

		if (fight(one, two) == true) {

			one.win();
		}
		else
		{
			two.win();
		}
	}

	~Fight(){}

private:
	bool fight(Fighter &one, Fighter &two) {
		one.coutInfo();
		two.coutInfo();
		while (true)
		{
			if (one.GivetDamage(two) == false) { return true; break; }
			if (two.GivetDamage(one) == false) { return false; break; }
		}
	}
};