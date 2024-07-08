#include <iostream>

using namespace std; 

//global 
const int ARRAYSIZE = 5; 
const int MAXSCORE = 100; 

//function prototypes 
double gradeCalculator(double gradesPar[]); 
void letterGrade(double percentPar); 

//main function 
int main () {
	//declaration
	double grades[ARRAYSIZE]; 
	double percent;

	//get user input 
	for (int i = 0; i < ARRAYSIZE; i++) {
		cout << "enter quizz " << i + 1 << ":" << endl;
		cin >> grades[i];
	}
	
	//calculation & output 
	percent = gradeCalculator(grades);
	cout << "your grade is :" << (percent * 100) << endl;
	letterGrade(percent);
	

}

double gradeCalculator(double gradesPar[]) {
	
	double total =0; 
	for (int i=0; i < ARRAYSIZE; i++)
	    total = total + gradesPar[i];  
    double  percent = total / (ARRAYSIZE * MAXSCORE);
	return percent;
}

void letterGrade(double percentPar) {
	if (percentPar <= 100 && percentPar >= 90)
		cout << "you got an A ";
	else if (percentPar <= 89 && percentPar >= 80)
		cout << "you got a B ";
	else if (percentPar <= 79 && percentPar >= 70)
		cout << "you got a C ";
	else if (percentPar <= 69 && percentPar >= 60)
		cout << "you got a D ";
	else
		cout << "you got an F "; 
}
