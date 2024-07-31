#include <iostream>
#include "D:\Summar Training 2024\railway_project\classes.h"

using namespace std;

class Management
{
public:
	Management()
	{
		firstPage();
	}
};

void firstPage()
{
	cout << "\n___________________________________________________________________________________" << endl;
		cout << "____________________________WELCOME TO XYZ RAILWAYS______________________________" << endl
			 << endl;
	cout << "\t\t|\t 1. Admin Mode    \t|" << endl;
	cout << "\t\t|\t 2. User Mode     \t|" << endl;
	cout << "\t\t|\t 3. Exit          \t|" << endl;
	int choice;
	string id = "admin";
	string password = "admin";
	string eid, pass;

	cout << "Select: ";
	cin >> choice;

	switch (choice)
	{
	case 1:
	{
		cout << "____________________________________________________________" << endl;
		cout << endl
			 << "Enter Admin Username: ";
		cin >> eid;
		if (id == eid)
		{
			cout << "\nEnter Admin Password: ";
			cin >> pass;
			if (pass == password)
			{
				mainMenu();
				firstPage();
			}

			else
			{
				cout << "Password is wrong, Please try again!" << endl;
				firstPage();
			}
		}

		else
		{
			cout << "Entered Admin ID is wrong, Please Try Again!" << endl;
			firstPage();
		}

		break;
	}

	case 2:
	{
		cout << "\n_______________________________________________________________________________" << endl;
		cout << "WELCOME TO USER MODE" << endl;
		cout << "\t1. Create New Account" << endl;
		cout << "\t2. Login using existing account" << endl;
		cout << "\n\tSelect: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
		{
			string uid, upass;
			cout << "__________________________________________________________________________________" << endl;
			cout << "______________________________CREATING NEW ACCOUNT_________________________________" << endl;
			cout << "\nEnter the New ID: ";
			cin >> uid;
			cout << "\nEnter Password: ";
			cin >> upass;

			fstream f("user.txt", ios::app);
			f << uid << " " << upass << endl;
			f.close();
			cout << "New User ID created!";
			cout << "Your User ID is " << uid << " and password is " << upass << endl;
			cout << "Use this as Login Credentials!" << endl
				 << endl;
			firstPage();

			break;
		}

		case 2:
		{
			cout << "__________________________________________________________________________________" << endl;
			cout << "__________________________________LOGING IN_______________________________________" << endl;

			string uid, upass;
			string cuid, cupass;

			cout << "\nEnter ID: ";
			cin >> uid;

			cout << "\nEnter Password: ";
			cin >> upass;

			fstream f1("user.txt", ios::in);
			while (!f1.eof())
			{

				f1 >> cuid >> cupass;
				cout << endl;

				if (uid == cuid && upass == cupass)
				{
					cout << "\nCredentials Matched!" << endl;
					cout << "\n_____________________________________________________________________________________" << endl;
					mainMenu();
					firstPage();
					return;
				}
			}

			cout << "Please enter correct details" << endl;
			cout << "\n_____________________________________________________________________________________" << endl;
			firstPage();

			break;
		}

		default:
			break;
		}

		break;
	}

	case 3:
	{

		cout << "___________________Thanks for using XYZ Railways_____________________" << endl
			 << endl;
		exit(0);
	}
	}
}

int main()
{
	Management mobj;
	// orderFood f;
	// f.foodOptions();
	// f.displayFoodDatabase();

	return 0;
}