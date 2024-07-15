//convert rupees to pound and pound to rupees
#include<iostream>
#include<d:\c_c++\currency_conversion\RsToDollar.cpp>
#include<d:\c_c++\currency_conversion\RsToPound.cpp>
#include<d:\c_c++\currency_conversion\RsToYuan.cpp>
#include<d:\c_c++\currency_conversion\DollarToRs.cpp>
#include<d:\c_c++\currency_conversion\PoundToRs.cpp>
#include<d:\c_c++\currency_conversion\YaunToRs.cpp>

using namespace std;
int main(){
    double GivenValue;
    int Choice{};
    cout<<"MENU: \n1.Ruppes to Pound \n2.Pound to Rupees\n3.Rupees to Dollar \n4.Dollar to Rupees \n5.Rupees to Yaun \n6.Yaun to Rupees \nEnter your choice: ";
    cin>>Choice;
    switch(Choice){
        case 1:
           cout<<"Enter Rupees: ";
           cin>> GivenValue;
           cout<<"Pounds: "<<RsToPound(GivenValue)<<endl; 
           break;
        case 2:
           cout<<"Enter Pounds: ";
           cin>> GivenValue;
           cout<<"Rupees: "<<PoundToRs(GivenValue)<<endl; 
           break;
        case 3:
           cout<<"Enter Rupees: ";
           cin>> GivenValue;
           cout<<"Dollar: "<<RsToDollar(GivenValue)<<endl; 
           break;
        case 4:
           cout<<"Enter Dollars: ";
           cin>> GivenValue;
           cout<<"Rupees: "<<DollarToRs(GivenValue)<<endl; 
           break;
        case 5:
           cout<<"Enter Rupees: ";
           cin>> GivenValue;
           cout<<"Yauns: "<<RsToYaun(GivenValue)<<endl; 
           break;
        case 6:
           cout<<"Enter Yauns: ";
           cin>> GivenValue;
           cout<<"Rupees: "<<YaunToRs(GivenValue)<<endl; 
           break;
        

    }
    
    
    

    
}