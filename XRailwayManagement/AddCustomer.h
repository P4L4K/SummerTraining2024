#include<iostream>
#include<vector>
#include<map>

using namespace std;


class passenger
{
	int ID;
	string PassengerName;
	char Gender;
	char BirthPref;
	int Age;
	public:
		passenger(int ID, string name, char gender,int age, char bp): ID(ID), PassengerName(name),Gender(gender), BirthPref(bp),Age(age){};
	
		void display()
		{
			cout<<ID<<"\t"<<PassengerName<<"\t"<<Gender<<"\t"<<Age<<"\t"<<BirthPref<<endl;
		}
};

map<int,vector<passenger>> database;

int generatePnr()
{
	int pnr=0;
	if(database.empty())
		 pnr=1;
	else
		 pnr= database.size()+1;
	cout<<"Your PNR is "<<pnr<<endl;
	return pnr;
}

class customer
{
	int PNR;
	int n_Passengers;
	vector<passenger> coPassengers;
	public:
		customer(int pnr, int np): PNR(pnr),n_Passengers(np)
		{
			for(int id=1;id<=np;id++)
			{
				string PassengerName;
				char Gender;
				char BirthPref;
				int Age;
				//taking passenger details
				cout<<"Enter Passenger name: ";
				cin>> PassengerName;
				cout<<"Enter Passenger Gender: ";
				cin>>Gender;
				cout<<"Enter Passenger Age: ";
				cin>>Age;
				cout<<"Enter Birth Preference: ";
				cin>>BirthPref;
				
				//creating passenger
				passenger p(id,PassengerName,Gender,Age,BirthPref);
				//adding passenger 
				coPassengers.push_back(p);
			}

			database[PNR]=coPassengers;
		}
		void ShowPassengers()
		{
			cout<<"ID\tName\tGender\tAGE\tBIRTH PREFERENCE"<<endl;
			for (auto p: coPassengers)
			{
				p.display();
			}
		}
};


void addCustomer()
{
	int pnr =generatePnr();
	int np;
	cout<<"Enter no of passengers: ";
	cin>>np;
	customer new_cusotmer(pnr,np);
	new_cusotmer.ShowPassengers();
}
