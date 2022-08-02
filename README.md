<h>Data-Structures-Project</h>
Problem Description:
You are required to design a program for an event planning agency, the program takes the 
data from user interactively on the screen then calculates the final cost and reports it to the 
customer.
Code Structure:
You are required to construct a class named Event; this class has the following members:
Variables: (Note: for string variable use only C strings)
EventName: holds the name of the event.
CustomerName: holds the name of the customer.
GuestCount: holds the number of guests to attend the event.
EventDuration: holds the duration of the event in minutes.
NumberOfWaiters: to hold the number of Waiters required in the event.
CostPerWaiter: holds the cost of one Waiter for the event duration.
FoodCost: holds the total food cost of all attendees.
TotalCost: holds the cost of the whole event including food cost and Waiters’ cost.
DepositAmount: hold the amount of deposit the user needs to pay before booking.
Functions:
getEventName(): gets the event name from user.
getCustomerName(): gets the customer name from user.
getGuestCount(): gets the number of guests for the event from user. 
getEventDuration(): gets the event duration from user.
CalcualteCost(): Calculates NumberOfWaiters, CostPerWaiter, FoodCost, TotalCost and 
DepositAmount.
PrintInfo(): Prints to the user the final calculated values for 
NumberOfWaiters,CostPerWaiter, FoodCost, TotalCost and DepositAmount.
Constants and Equations:
- Each Waiter can serve 20 persons maximum.
- The cost per each Waiter is 46.5 EGP per hour and 1 EGP for each extra minute.
- The cost of one person’s meal is 54.5 EGP.
- Deposit amount = 25% of the total cost.
