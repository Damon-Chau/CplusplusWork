//*********************************************
// Student1 Name: Damon Chau
// Student1 Number: 20620156
//
// Student2 Name: Kuil Schoneveld
// Student2 Number: 20634087
//
// SYDE 121 Lab: 05 Assignment: 03
//
// Filename: Lab0503.cpp
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

# include <iostream>
# include <cstdlib>
# include <cmath>
using namespace std;

int main() {
	double pi = 4.0;
	double denominator = 3.0;
	int counter = 2;
	int dec_place = 0;
	
	int previous = 4.0;
	bool flag = true;
	
	cout << "After a certain number of calculations, numbers in a decimal place will remain constant.\n"
	     << "What decimal place do you want to stop calculations? (1-6)";
	cin >> dec_place;
	 
	while (flag) {
		int current = 0;
		
		//Calculate estimation of PI
		if (counter % 2 == 0) {
			pi = pi + (4/(denominator) * (-1.0));
			cout.setf(ios::fixed);
			cout.precision(12);
			cout << counter - 1 << "               " << pi << endl;
			denominator += 2;
			counter ++;
		} else {
			pi = pi + (4/denominator);
			cout.setf(ios::fixed);
			cout.precision(12);
			cout << counter - 1 << "               " << pi << endl;
			denominator += 2;
			counter ++;
		}
		
		current = pi * pow(10, dec_place);
		
		//Check if current value of pi calculated is the same as previous pi 
		//according to decimal places
		if (current == previous) {
			//Recalculate pi once more
			if (counter % 2 == 0) {
				pi = pi + (4/(denominator) * (-1.0));
				cout.setf(ios::fixed);
				cout.precision(12);
				cout << counter - 1 << "               " << pi << endl;
				denominator += 2;
				counter ++;
			} else {
				pi = pi + (4/denominator);
				cout.setf(ios::fixed);
				cout.precision(12);
				cout << counter - 1 << "               " << pi << endl;
				denominator += 2;
				counter ++;
			}
			
			flag = false;
			
		} else {
			//Update previous to be what was calculated in this iteration
			previous = current;
		}
	}
	
	cin.get();
}
