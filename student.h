#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <string>
#include "degree.h"

class Student {

private:
	std::string studentID;
	std::string firstName;
	std::string lastName;
	std::string email;
	DegreeProgram degreeProgram;
	int age;
	int numDaysToCompleteEachCourse[];
	

public:
	//functions that are declaired
	// setters (mutators)
	void set_studentID( std::string id );
	void set_firstName(std::string firstName);
	void set_lastName(std::string lastName);
	void set_email(std::string email);
	void set_degreeProgram(DegreeProgram degreeProgram);
	void set_name( int age);
	void set_numDaysToComplete(int daysInCourse1, int daysInCourse2, int daysInCourse3);

	//getters (accessors)
	std::string get_studentID();
	std::string get_firstName();
	std::string get_lastName();
	std::string get_email();
	DegreeProgram get_degreeProgram();
	int get_age();
	int get_numDaysToComplete(); // thie will return an array of ints

	//other functions
	void print();
	Student();

	Student(std::string studentID, 
		std::string firstName, 
		std::string lastName, 
		std::string email, 
		DegreeProgram degreeProgram,
		int age,
		int numDaysToCompleteEachCourse[]);

};



#endif //_STUDENT_H_



