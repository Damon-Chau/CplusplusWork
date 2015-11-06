//*********************************************
// Student1 Name: Damon Chau
// Student1 Number: 20620156
//
// Student2 Name: Kuil Schoneveld
// Student2 Number: 20634087
//
// SYDE 121 Lab: 05 Assignment: 02
//
// Filename: Lab0501.cpp
// Date submitted: October 30, 2015
//
// We hereby declare that this code, submitted
// for credit for the course SYDE121, is a product
// of our own efforts. This coded solution has
// not been plagiarized from other sources and
// has not been knowingly plagiarized by others.
//
// Pair Programming Work Declaration:
// Damon Chau Completed 50% of the assignment.
// Kuil Schoneveld Completed 50% of the assignment.
//
//*********************************************

#include <iostream>
using namespace std; 

int main() {
	int paycode;
	int num_employees;
	
	int weekly_salary;
	
	double hourly_wage;
	int hours_worked;
	int weekly_sales;
	
	int num_items;
	double hourly_work_total = 0;
	int item_income;
	double commission_worker_total = 0;
	
	int manager_total = 0;
	int counter = 0;
	int piece_worker_total = 0;
	int overtime_hours = 0;
	int manager = 0;
	int hourly_work = 0;
	int commission_worker = 0;
	int piece_worker = 0;

		cout << "Enter the number of employees" << endl;
		cin >> num_employees;
		
		do {
			cout << "Enter the paycode of the employees:\n";
			cout << "Manager Paycode -- 1\n";
			cout << "Hourly Worker Paycode-- 2\n";
			cout << "Commission Worker Paycode-- 3\n";
			cout << "Pieceworker Paycode-- 4\n";
			cin >> paycode;
			
			switch (paycode) {
			case 1:
				cout << "You selected Manager" << endl;
				cout << "Enter the manager's weekly salary:" << endl;
				cin >> weekly_salary;
				manager += 1;
				counter += 1;
				break;
			case 2:
				cout << "You selected Hourly Worker" << endl;
				cout << "Enter the hourly worker's fixed hourly wage:" << endl;
				cin >> hourly_wage;
				cout << "Enter how many hours the hourly worker worked:" << endl;
				cin >> hours_worked;
				hourly_work += 1;
				counter += 1;
				break;
			case 3:
				cout << "You selected Commission Worker" << endl;
				cout << "Enter the commission worker's gross weekly sales:" << endl;
				cin >> weekly_sales;
				commission_worker += 1;
				counter += 1;
				break;
			case 4:
				cout << "You selected Pieceworker" << endl;
				cout << "Enter the number of items the pieceworker produced" << endl;
				cin >> num_employees;
				cout << "Enter the pieceworker's fixed income per item:" << endl;
				cin >> item_income;
				piece_worker++;
				counter++;
				break; 
			default:
				cout << "Sorry, you entered an invalid paycode. Please try again." << endl;
				break;
			}
			
			if (paycode == 1){
				manager_total = manager_total + weekly_salary;
			} else if (paycode == 2) {
				if (hours_worked > 40) {
					overtime_hours = hours_worked - 40;
					hourly_work_total = (40 * hourly_wage) + overtime_hours * (1.5 * hourly_wage);
				}
				hours_worked * hourly_wage;
			} else if (paycode == 3) {
				commission_worker_total = 200 + (.066 * weekly_sales);
			} else if (paycode == 4) {
				piece_worker_total = num_employees * item_income;
			}
			
		} while (counter < num_employees);
					
		cout << "|Employee | Number of Employees | Total Income |" << endl;
		cout << "-----------------------------------------------------------------" << endl;
		cout << "|Manager  - " << manager << " - " << manager_total <<endl;
		cout << "|Hourly Worker -" << hourly_work << " - " << hourly_work_total << endl;
		cout << "|Commission Worker -" << commission_worker << " - " << commission_worker_total <<endl;
		cout << "|Pieceworker -" << piece_worker << " - " << piece_worker_total <<endl;
		cout << "|Total -" << manager + hourly_work + commission_worker + piece_worker << " - " 
			 << manager_total + hourly_work_total + commission_worker_total + piece_worker_total << endl;

	cin.get();

}
