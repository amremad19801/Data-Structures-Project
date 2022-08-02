/*
 New Libraries :
 ctype.h

 New functions :
 isalpha() : It is a function which returns 0 if the passed argument is not an alphabet character and returns 1 if the passed argument is an alphabet character.
 isspace() : It is a function which returns 0 if the passed argument is not a space character and returns 1 if the passed argument is a space character.
 isdigit() : It is a function which returns 0 if the passed argument is not a number character and returns 1 if the passed argument is a number character.
 atoi() : It is a function which converts string to integer.
 atof() : It is a function which converts string to float.
 */

#include <iostream>
#include<cmath>
#include<ctype.h>
#include<iomanip>
#include<cstring>
using namespace std;

const int N = 100;

class Event {
private:
	char EventName[N];
	char CustomerName[N];
	int GuestCount;
	int EventDuration;
	int NumberOfWaiters;
	float CostPerWaiter;
	float FoodCost;
	float TotalCost;
	float DepositAmount;
public:
	Event();
	void getEventName();
	void getCustomerName();
	void getGuestCount();
	void getEventDuration();
	void CalculateCost();
	void PrintInfo();
};
Event::Event() {
	EventName[0]='\0';
	CustomerName[0]='\0';
	GuestCount=0;
	EventDuration=0;
	NumberOfWaiters=0;
	CostPerWaiter=0;
	FoodCost=0;
	TotalCost=0;
	DepositAmount=0;
}
void Event::getEventName() {
	unsigned int i=0;
	cout<<"Enter the name of the event"<<endl;
	cin.getline(EventName,N);
	while(1) {
		while((i<strlen(EventName)) && (EventName[0]!='\0') && (EventName[0]!=' ')) {
			if((isalpha(EventName[i])) || (isspace(EventName[i]))) {
				i++;
				continue;
			}
			else {
				cout<<"Please, Re enter the event name."<<endl;
				cin.getline(EventName,N);
				i=0;
			}
		}
		if((EventName[0]!='\0')&& (EventName[0]!=' '))
		break;
		else {
			cout<<"Please, Re enter the event name."<<endl;
			cin.getline(EventName,N);
		}
	}
}
void Event::getCustomerName() {
	unsigned int i=0;
	cout<<"Enter the customer's first and last name"<<endl;
	cin.getline(CustomerName,N);
	while(1) {
		while((i<strlen(CustomerName)) && (CustomerName[0]!='\0') && (CustomerName[0]!=' ')) {
			if((isalpha(CustomerName[i])) || (isspace(CustomerName[i]))) {
				i++;
				continue;
			}
			else {
				cout<<"Please, Re enter the customer's first and last name."<<endl;
				cin.getline(CustomerName,N);
				i=0;
			}
		}
		if((CustomerName[0]!='\0')&& (CustomerName[0]!=' '))
		break;
		else {
			cout<<"Please, Re enter the customer's first and last name."<<endl;
			cin.getline(CustomerName,N);
		}
	}
}
void Event::getGuestCount() {
	unsigned int i=0;
	char GuestCountInString[N];
	cout<<"Enter the number of guests"<<endl;
	cin.getline(GuestCountInString,N);
	while(1) {
		while(i<strlen(GuestCountInString)) {
			if(isdigit(GuestCountInString[i])) {
				i++;
				continue;
			}
			else {
				cout<<"Please, Re enter the number of guests."<<endl;
				cin.getline(GuestCountInString,N);
				i=0;
			}
		}
		GuestCount=atoi(GuestCountInString);
		if(GuestCount>0)
		break;
		else {
			cout<<"Please, Re enter the number of guests."<<endl;
			cin.getline(GuestCountInString,N);
		}

	}
}
void Event::getEventDuration() {
	unsigned int i=0;
	char EventDurationInString[N];
	cout<<"Enter the number of minutes in the event"<<endl;
	cin.getline(EventDurationInString,N);
	while(1) {
		while(i<strlen(EventDurationInString)) {
			if(isdigit(EventDurationInString[i]) || (EventDurationInString[i]=='.')) {
				i++;
				continue;
			}
			else {
				cout<<"Please, Re enter the event duration."<<endl;
				cin.getline(EventDurationInString,N);
				i=0;
			}
		}
		EventDuration=int(round(atof(EventDurationInString)));
		if(EventDuration>0)
		break;
		else {
			cout<<"Please, Re enter the event duration."<<endl;
			cin.getline(EventDurationInString,N);
		}

	}
}
void Event::CalculateCost() {
	if(GuestCount%20==0)
	NumberOfWaiters=GuestCount/20;
	else
	NumberOfWaiters = 1+(GuestCount/20);
	CostPerWaiter = (46.5*(EventDuration/60))+(EventDuration%60);
	FoodCost = 54.5*GuestCount;
	TotalCost = (NumberOfWaiters*CostPerWaiter)+FoodCost;
	DepositAmount = 0.25*TotalCost;
}
void Event::PrintInfo() {
	for(unsigned int i=0;i<(19+strlen(CustomerName));i++)
	cout<<'-';
	cout<<endl;
	cout<<EventName<<" Event"<<endl;
	cout<<"Event estimate for "<<CustomerName<<endl;
	for(unsigned int i=0;i<(19+strlen(CustomerName));i++)
	cout<<'-';
	cout<<endl;
	cout<<"The number of waiters: "<<NumberOfWaiters<<endl;
	cout<<"The cost per waiter: "<<CostPerWaiter<<endl;
	cout<<"The cost for food is: "<<FoodCost<<endl;
	cout<<"The total cost is: "<<TotalCost<<endl;
	cout<<"Please provide a 25% deposit to reserve the event."<<endl;
	cout<<"The deposit needed is: "<<DepositAmount<<endl;
}
int main() {
	Event Event1;
	Event1.getEventName();
	Event1.getCustomerName();
	Event1.getGuestCount();
	Event1.getEventDuration();
	Event1.CalculateCost();
	Event1.PrintInfo();
	return 0;
}
