//*********************************************
// Student1 Name: Damon Chau
// Student1 Number: 20620156
//
// Student2 Name: Rishabh Nag
// Student2 Number: 20621376
//
// SYDE 121 Lab: 06 Assignment: 01
//
// Filename: lab0601.cpp
// Date submitted: November 4, 2015
//
// We hereby declare that this code, submitted
// for credit for the course SYDE121, is a product
// of our own efforts. This coded solution has
// not been plagiarized from other sources and
// has not been knowingly plagiarized by others.
//
// Pair Programming Work Declaration:
// Damon Chau Completed 50% of the assignment.
// Rishabh Nag Completed 50% of the assignment.
//
//*********************************************

# include <iostream>
# include <cmath>
using namespace std;

void get_abc(double& a, double& b, double& c);
double discriminant(double a, double b, double c, double& discrim);
void roots(double a, double b, double c, double discrim);

int main() {
	double a = 0;
	double b = 0;
	double c = 0;

	double discrim = 0;

	get_abc(a, b, c);
	
	discrim = discriminant(a, b, c, discrim);
	
	roots(a, b, c, discrim);
	
	cin.get();
	
	return 0;
}

void get_abc(double& a, double& b, double& c) {
	// Get coefficients of quadratic equation
	cout << "The format of the equation will be Ax^2 + Bx + C = 0. \n"
		 << "Enter coefficient A:";
	cin >> a;
	cout << "Enter coefficient B:";
	cin >> b;
	cout << "Enter coefficient C:";
	cin >> c;
	
	return;
}

double discriminant(double a, double b, double c, double& discrim){
	// Calculate discriminant
	
	discrim = pow(b, 2) - 4 * a * c;
	
	if (discrim >= 0){
		cout << "Roots are real.\n";
		return discrim;
	} else {
		cout << "Roots are complex.\n";
		return -1;
	}
}

void roots (double a, double b, double c, double discrim){
	// Calculate roots
	
	double root1 = 0;
	double root2 = 0;
	
	if (discrim > 0) {
		root1 = (-b + pow(discrim, 0.5)) / (2*a);
		root2 = (-b - pow(discrim, 0.5)) / (2*a);
		
		cout << "Root 1 is (" << root1 << ", 0)" <<endl
			 << "Root 2 is (" << root2 << ", 0)"<< endl;
	} else if (discrim == 0) {
		root1 = (-b + pow(discrim, 0.5)) / (2*a);
		
		cout << "Since the discriminant is equal to 0, there is only 1 root."
			 << "The root is (" << root1 << ", 0)" << endl;
	} else {
		cout << "Root 1  is (-" << b << "+ (" << discrim << ")^0.5)/" << 2 * a << endl;
		cout << "Root 2  is (-" << b << "- (" << discrim << ")^0.5)/" << 2 * a;
	}
}
