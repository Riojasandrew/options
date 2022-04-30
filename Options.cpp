// Options.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*The more humor in this program the better you will remember it. 
Your program must contain a description for the user of what it does.
Your program must ask for the user's name, then greet them by name,
Your program must contain simple/primitive data type variables.
Your program must be able to print text to the display.
Your program must accept user input.
Your program must use one or more types of loops. For example, "for loop", or "do "while loop", or the "while loop".
Your program must have at least one other function that takes parameters and returns a value which is called from main.
Your program must use at least one reference
Your program must use at least one pointer
Your program must have at least one additional header file (.h) you created. 
Your program must have at least one additional code file (CPP) you created.
Your program must use heavy comments in the code showing a good understanding of your code. 
Your program must include at least two classes, one base class, and one child class.
Your program must demonstrate inheritance correctly. 
Your program must your private and public correctly to demonstrate encapsulation. 
Your program must be placed in GitHub
You may make your program graphical, however, you are only required to have a text-based console application. Get your program working using the text before you think about making a GUI.*/

#include <iostream>
#include "Introduction.h"
#include "Story.h"
#include <string>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <cstdlib>

using namespace std;
string name;

// if statement chooses choice 2
void choice2(string s) {

	cout << " The guard beings charging at you plumping you 6 feet into the group. *You think to yourself\n was it worth it?*" << endl;
	//Ends the game
	exit(1);
	
}

// else statement choose choice 3
string choice3(string s) {
	cout << "The guard tell you follow this path and it'll lead you to Hilu our \nkingdom is there." << s << endl;
	return s;
	
}


void choice1(int i) {
	cout << name + " selected " << i << endl;
	if (i == 1) {
		cout << "You told him that you were his dad" <<endl;
		string s;
		choice2(s);
		
	}
	else {
		cout << "You tell him you are a lost traveler.";
		string s;
		string ss = choice3(s);
		cout << ss << " He points down a path and you begin walking." << endl;
		cout << "As you continue walking down the path you encounter a maiden on the floor.\n What do you do?" << endl;
		cout << "1. Don't be a simp 2. Be a simp" << endl;
		// return #
		return;
	}

}


// if statement when 1 is picked
void choice4a(string s) {
		cout << "You make it to Hilu and get welcome by the guards. \nHowever, the maid survived somehow and shot tho dead" << s << endl;
		exit(1);
}

// else statement when 2 is picked
string choice4b(string s) {
	
	cout << " You plumped the monster with your bear fist, but than a dragon appears before you." << endl;
	cout << " What do you do?\n";
	cout << "1. Fight the dragon like a beast you are 2. Scream like a girl" << endl;
	return s;
	
}

// This the 2nd choices
void choice4(int t) {
	cout << name + " selected " << t << endl;
		if (t == 1) {
			cout << "You continue walking hearing now distance scream* HELPPPPPPP ME*" << endl;
			string s;
			choice4a(s);
			
		}
		else {
			cout << "You decided to help the maiden in distress beating the monster to death";
			string s;
			string ss = choice4b(s);
			return;
		}
	
}

void choice5a(string s) {
	
}
// Class of dragon type
class Dragon {


	// Public for all classes
public:
	Dragon(string name_in) {
		this->name = name_in;
	}
	~Dragon() {
		
		cout << "Fire Dragon"<< this->name << endl;
	}
private:
	// Private for this class only doesn't share string
	string name;

};


void choice5(int o) {
	// Reference and pointer
	int* ptr = &o;
	int& ref = o;
	char reset = 'Y';
	// loops the game when it ends to pick multiple chooses.
	while (reset == 'y' || reset == 'Y') {
		cout << name + " selected " << o << endl;
		if (o == 1) {
			cout << "You decided to fight the dragon. Where it being spewing fire. It's a ";
			string s;
			choice5a(s);
			Dragon myvar(" \nWeakness: Strong and brave HERO!");
			break;

		}
		else {

			cout << "You decided to scream like a girl killing the dragon, but also killed the maiden" << endl;
			string s;
			cout << "You got the bad ending.." << endl;
			exit(1);
			return;
			cin >> reset;
		}
	}

}

void choice6a(string s) {
	cout << "A fellow at the bar slithers over and says *Sayyyy your not around hereee are youuuu*\n than he pulls a knife out of his pocket\n waving it across your face. You try to ignore him, but than he grabs the maidens " << s << endl;
	
}

// else statement when 2 is picked
string choice6b(string s) {

	cout << "You enter the Shopkeep and walk to the counter and begin\n looking at armor. The maiden calls the shopkeep. *Well well well what do we\n have here? I haven't seen you in two days.*";
	return s;

}

void choice6(int t) {
	cout << name + " selected " << t << endl;
	if (t == 1) {
		cout << "You decided to head to the Tavern where you are welcomed by eyes starting you down\n all over the room. The maiden following right behind you\n You ignore her and walk to the bar. I think she's falling for you more and more." << endl;
		string s;
		choice6a(s);

	}
	else {
		cout << "You asked the maiden what she wanted to do. She looked at you confused and said\n how about I take you to a shopkeep to freshen you up.";
		string s;
		string ss = choice6b(s);
		return;
	}

}
// Groups related variables
struct player {
	std::string name;
	int hp;
	int health = 250;
	int attack() {
		return hp;
	}

	void takeDamage(int i) {
		this->health = this->health - i;
	}
	player(std::string nm, int hpp) {
		this->name = nm;
		this->hp = hpp;
	}
	~player() {
		cout << this->name << " is alive" << std::endl;
	}
};


int main()
{
	

	char reset = 'Y';

	while (reset == 'y' || reset == 'Y') {
		cout << "Hello welcome user to my programmers game in which you will be making choices along your journey.\n";
		cout << "For this program it's a middle-age game in which you encounter monster and fight a dragon with other crazy encounters";
		cout << "Now I can't say you'll won't d- overcome some encounter, but that's up to you how to deal with them.\n";
		cout << "That being said if thou drop lifeless than no maiden + no riches = neglect" << endl;
		cout << "Now tell us what is your name traveler?: ";
		cin >> name;
		int uin;
		intro();
		cin >> uin;
		choice1(uin);
		cin >> uin;
		choice4(uin);
		cin >> uin;
		choice5(uin);
		player p1(name, 100);
		player d2("Fire dragon", 25);
		while (p1.health > 75 && d2.health > 0) {
			p1.takeDamage(d2.attack());
			d2.takeDamage(p1.attack());
		}
		if (p1.health == 75) {
			std::cout << "You survived killing the dragon\n";
			cout << "barely..";
		}
		if (d2.health <= 0) {
			std::cout << "Dragon is laying dead beneath your feet." << endl;
		}
		cout << "\n The maiden jumps in your arms than she sudden falls.. You pick her back up and head towards Hilu kingdom\n";
		cout << "After reaching the kingdom what do you do?\n";
		cout << "1. Head to the tavern. 2. Ask where the maiden wants to go" << endl;
			cin >> uin;
			choice6(uin);
		cout << "\n\nTry again? (y/n)";
		
		cin >> reset;
		cout << "Quiters never win!" << endl;

		
	}
	
	
	
	return 0;
	
}


