#include <iostream> 
#include <ctime>
class person
{
public:
	std::string name;
	std::string gender;
	std::string ras;
	std::string rassa(person pers) {
		if ((rost > 50) && (rost <= 140)) return ras = "Lyn";
		else if ((rost > 140) && (rost <= 170)) return ras = "Yun";
		else if ((rost > 170) && (rost <= 190)) return ras = "Jin";
		else if (rost > 190) return ras = "Gon";
	}
	int rost;
	std::string klass;
};

class Power : public person
{
public:
	int dif;
	int difficulty(Power pers) {
		if (pers.ras == "Lyn") return dif = 4;
		else if (pers.ras == "Yun") return dif = 5;
		else if (pers.ras == "Jin") return dif = 5;
		else if (pers.ras == "Gon") return dif = 3;
	}
	bool operator==(Power& obj)
	{
		return obj.weapon == weapon;
	}
	std::string weapon;
	int pr;
	int protection() {
		return pr = rand() % 101;
	}
	int at;
	int attack() {
		return at = rand() % 101;
	}
	int reg;
	int regeneration() {
		return reg = rand() % 101;
	}
};

class Team :public Power {
public:
	std::string player;
	std::string TeamPlayer(Team pers) {
		if (pers.at> pers.pr) return pers.player = "Attacking";
		else if (pers.at < pers.pr) return pers.player = "Protecting";
		else return pers.player = "Universal";
	}
};

	int main() {
		srand(time(NULL));
		std::cout << "------------------------------------------------------" << std::endl;
		Team pers; 
		pers.name = "Muwert";
		std::cout << "name: " << pers.name << std::endl;
		pers.gender = "Female";
		std::cout << "gender: " << pers.gender << std::endl;
		pers.rost = 196;
		std::cout << "rassa: " << pers.rassa (pers) << std::endl;
		pers.klass = "Assassin";
		std::cout << "klass: " << pers.klass << std::endl;
		std::cout << "difficulty: " << pers.difficulty(pers) << std::endl;
		pers.weapon = "Knife";
		std::cout << "weapon: " << pers.weapon << std::endl;
		std::cout << "protection: " << pers.protection() << std::endl;
		std::cout << "attack: " << pers.attack() << std::endl;
		std::cout << "regeneration: " << pers.regeneration() << std::endl;
		std::cout << "TeamPlayer: " << pers.TeamPlayer(pers) << std::endl;
		std::cout << "------------------------------------------------------" << std::endl;
		Team pers1;
		pers1.name = "Kurt";
		std::cout << "name: " << pers1.name << std::endl;
		pers1.gender = "Male";
		std::cout << "gender: " << pers1.gender << std::endl;
		pers1.rost = 157;
		std::cout << "rassa: " << pers1.rassa(pers1) << std::endl;
		pers1.klass = "Destroyer";
		std::cout << "klass: " << pers1.klass << std::endl;
		std::cout << "difficulty: " << pers1.difficulty(pers1) << std::endl;
		pers1.weapon = "Bluster";
		std::cout << "weapon: " << pers1.weapon << std::endl;
		std::cout << "protection: " << pers1.protection() << std::endl;
		std::cout << "attack: " << pers1.attack() << std::endl;
		std::cout << "regeneration: " << pers1.regeneration() << std::endl;
		std::cout << "TeamPlayer: " << pers1.TeamPlayer(pers1) << std::endl;
		std::cout << "------------------------------------------------------" << std::endl;
		Team pers2;
		pers2.name = "Myrt";
		std::cout << "name: " << pers2.name << std::endl;
		pers2.gender = "Male";
		std::cout << "gender: " << pers2.gender << std::endl;
		pers2.rost = 72;
		std::cout << "rassa: " << pers2.rassa(pers2) << std::endl;
		pers2.klass = "Blade master";
		std::cout << "klass: " << pers2.klass << std::endl;
		std::cout << "difficulty: " << pers2.difficulty(pers2) << std::endl;
		pers2.weapon = "Knife";
		std::cout << "weapon: " << pers2.weapon << std::endl;
		std::cout << "protection: " << pers2.protection() << std::endl;
		std::cout << "attack: " << pers2.attack() << std::endl;
		std::cout << "regeneration: " << pers2.regeneration() << std::endl;
		std::cout << "TeamPlayer: " << pers2.TeamPlayer(pers2) << std::endl;
		std::cout << "------------------------------------------------------" << std::endl;
		std::cout << "Weapon" << std::endl;
		if (pers == pers1) {
			std::cout << pers.name << " and " << pers1.name << " have similar weapon" << std :: endl;
		}
		else std::cout << pers.name << " and " << pers1.name << " have different weapon" << std :: endl;

		if (pers1 == pers2) {
			std::cout << pers1.name << " and " << pers2.name << " have similar weapon" << std::endl;
		}
		else std::cout << pers1.name << " and " << pers2.name << " have different weapon" << std::endl;

		if (pers == pers2) {
			std::cout << pers.name << " and " << pers2.name << " have similar weapon" << std::endl;
		}
		else std::cout << pers.name << " and " << pers2.name << " have different weapon" << std::endl;
		std::cout << "------------------------------------------------------" << std::endl;
	}

