#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

void MainMenu()
{
	system("cls");
	cout << "1. The calculation of the quadratic equation" <<endl;
	cout << "2. list of my favorite anime" << endl;
	cout << "3. Info about the program" << endl;
	cout << "4. exit" << endl;

	cout << "Enter the line number and press <Enter> to select it" << endl;
}

void equation(double a, double b, double c)
{
	int t1, t2, D;

	D = (b * b) - (4 * a * c);
	D = sqrt(D);
	
	if (D > 0)
	{
		t1 = (-b + D) / 2 * a;
		t2 = (-b - D) / 2 * a;
		cout << "First answer: " << t1 << endl << "Second answer: " << t2 << endl;
	}
	else if (D == 0)
	{
		t1 = (-b + D) / 2 * a;
		cout << "Answer: " << t1 << endl;
	}
	else
	{
		cout << "D < 0, no solution!" << endl;
	}
	cout << "Press the key to continue...";
	_getch();
	system("cls");
}

void anime()
{
	cout << "Naruto" <<endl;
	cout << "Fate" << endl;
	cout << "Death note" << endl;
	cout << "Demon Slayer" << endl;
	cout << "JoJo" << endl;
	cout << "Psycho-pass" << endl;
	cout << "Press the key to continue...";
	_getch();
	system("cls");
}

void infoProgram()
{
	cout << "ver: 1.0" << endl;
	cout << "Press the key to continue...";
	_getch();
	system("cls");
}

int main()
{
	int num;
	
	while (1)
	{
		MainMenu();
		cin >> num;

		switch (num)
		{
			case 1:
			{
				double a, b, c;

				system("cls");
				cout << "Enter A:";
				cin >> a;
				cout << endl;
				cout << "Enter B:";
				cin >> b;
				cout << endl;
				cout << "Enter C:";
				cin >> c;
				cout << endl;
				equation(a,b,c);
			}break;

			case 2:
			{
				system("cls");
				anime();
			}break;

			case 3:
			{
				system("cls");
				infoProgram();
			}break;

			case 4:
			{
				system("cls");
				cout << "Thank you for visiting!";
				exit(1);
			}break;

			default:
			{
				system("cls");
				cout << "You entered a number that is not in the list, try again!"<<endl;
				cout << "Press the key to continue...";
				_getch();
				system("cls");
			}break;
		}
	}
}