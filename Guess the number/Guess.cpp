#include <iostream>
#include <windows.h>
#include<ctime>
#include "windows.h" 
using namespace std;


void main(){
	srand(time(0));
	char rasp; 
	bool ok = 1; 
	int x=rand()%10+0, y=rand()%20+10, nr= rand() % y + x,a=0,vieti=5;
	while (nr > y) { nr=nr-2; }
	while (nr < x) { nr=nr+2; }

	cout <<endl<< "---------------------------------" << endl;
	cout << "Project made by Emanuel Butoi" << endl;
	cout << "---------------------------------" << endl<< endl;
	Sleep(2000);
	cout << "Do you feel lucky?" <<endl;

	while (ok) {
		Sleep(2000);
		cout << "Can you guess the number that I'm thinking of?" << endl;
		Sleep(2000);
	    cout << "You have " << vieti << " lives!  (the number is between " << x << " and " << y << ")" << endl; 
			cin >> a;
			if (a == nr) { cout << "Congratulations you guessed the number!"<<endl; Sleep(3000); ok = 0; }
			else {
				cout << "Try again ..." << endl; vieti--;
			}

			Sleep(1000);

			if (nr == a - 5 || nr == a - 4 || nr == a - 3 || nr == a - 2 || nr == a - 1) { cout << "You are very close, think of a smaller number!"<<endl; }
			if (nr == a + 5 || nr == a + 4 || nr == a + 3 || nr == a + 2 || nr == a + 1) { cout << "You are very close, think of a bigger number!" << endl; }

			if (vieti == 0) { cout << "You lost!" << endl; Sleep(2000); ok = 0; }

	}

}