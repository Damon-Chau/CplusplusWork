//*********************************************
// Student1 Name: Damon Chau
// Student1 Number: 20620156
//
// Student2 Name: Kuil Schoneveld
// Student2 Number: 20634087
//
// SYDE 121 Lab: 05 Assignment: 01
//
// Filename: Lab0502.cpp
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
    int num_rows = 0;
    
    bool end_of_line = true;
    
    int sec1 = 0;
    int sec2 = 0;
    
	do{
        cout<<"Enter a number of rows between 3 and 19: ";
        cin >> num_rows;
        
        if (num_rows % 2 != 1 && 3 < num_rows && num_rows < 19) {
            cout<<"You must enter an odd number between 3 and 19. Please try again:/n"<<endl;
        }
    } while(num_rows % 2 != 1 && 3 < num_rows && num_rows < 19);
    
    sec1 = (num_rows - 1) / 2;
	sec2 = (num_rows - 1) / 2;
    
    for(int i = 1; i <= num_rows; i++) {
        cout << "\n";        
        
        for (int j = 0; j < num_rows; j++) {
            // output * or space
            if(j >= sec1 && j <= sec2) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        
        if (sec1 == 0) {
            end_of_line = false;
        }
        
        if (end_of_line) {
            sec1 -= 1; 
			sec2 += 1;
        } else {
            sec1 += 1; 
			sec2 -= 1;
        }
        
    }
    
    cin.get();
}
