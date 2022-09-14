<h1>Data-Structures-Project</h1>
  <h2>Project Description</h2>
    <p>The project is a program for an event planning agency, the program takes the 
       data from user interactively on the screen then calculates the final cost and reports it to the 
       customer.
    </p>
    <h2>Code Structure</h2>
      <p>
       <br>I have constructed a class named Event; this class has the following members</br>
       <br>Variables: (Note: for string variable use only C strings)</br>
       <br>EventName: holds the name of the event.</br>
       <br>CustomerName: holds the name of the customer.</br>
       <br>GuestCount: holds the number of guests to attend the event.</br>
       <br>EventDuration: holds the duration of the event in minutes.</br>        
       <br>NumberOfWaiters: to hold the number of Waiters required in the event.</br>
       <br>CostPerWaiter: holds the cost of one Waiter for the event duration.</br>
       <br>FoodCost: holds the total food cost of all attendees.</br>
       <br>TotalCost: holds the cost of the whole event including food cost and Waiters’ cost.</br>
       <br>DepositAmount: hold the amount of deposit the user needs to pay before booking.</br>
      </p>
    <h2>Functions</h2>
      <p>
       <br>getEventName(): gets the event name from user.</br>
       <br>getCustomerName(): gets the customer name from user.</br>
       <br>getGuestCount(): gets the number of guests for the event from user.</br>
       <br>getEventDuration(): gets the event duration from user.</br>
       <br>CalcualteCost(): Calculates NumberOfWaiters, CostPerWaiter, FoodCost, TotalCost and DepositAmount.</br>
       <br>PrintInfo(): Prints to the user the final calculated values for NumberOfWaiters,CostPerWaiter, FoodCost, TotalCost and DepositAmount.</br>
      </p>
    <h2>Constants and Equations</h2>
      <p>
       <br>Each Waiter can serve 20 persons maximum.</br>
       <br>The cost per each Waiter is 46.5 EGP per hour and 1 EGP for each extra minute.</br>
       <br>The cost of one person’s meal is 54.5 EGP.</br>
       <br>Deposit amount = 25% of the total cost.</br>
      </p>
  <h2>Files</h2>
    <p>main.c : This file contains the code of the project.</p>
