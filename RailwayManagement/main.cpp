#include<iostream>
#include "AddCustomer.h"
using namespace std;
void main_menu(){
cout<<"---------------Main Menu-----------------"<<endl;
cout<<"-----------------------------------------"<<endl;
cout<<"Press 1 to add Customer Details"<<endl;
cout<<"Press 2 for ticket booking"<<endl;
cout<<"Press 3 for ticket and charges"<<endl;
cout<<"Press 4 to display Database"<<endl;
cout<<"Press 5 to Cancel"<<endl;
cout<<"Press 6 to view E-Catering Database"<<endl;
cout<<"Press 7 to exit"<<endl;
cout<<"-----------------------------------------"<<endl;
int ch;
cout<<"Enter your choice:"<<endl;
cin>>ch;
switch(ch){
case 1:
	addCustomer();
	break;
case 2:
	break;
case 3:
	break;
case 4:
	 break;
case 5:
	break;
case 6:
	break;
case 7:
	break;
default:
	cout<<"INVALID INPUT..."<<endl;

}

}

int main(){
	while(1){
		main_menu();
	}
return 0;

}