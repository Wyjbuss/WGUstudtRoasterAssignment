
#ifndef _ROSTER_H_
#define _ROSTER_H_
#include <string>
#include "degree.h"
#include "student.h"

class Roster
{

public:
	Student *classRosterArray;

	std::string *SclassRosterArray;

	int rosterNextIndex = 0;

	void add(Student studentID);

	void add(std::string studentID,
		std::string firstName,
		std::string lastName,
		std::string email,
		DegreeProgram degreeProgram,
		int age,
		int numDaysToCompleteEachCourse[]);

	// should remove students from the roster by studentId 
	// if studentID dosent exist then print and error message
	// including that the "student" was not found.
	void remove(std::string studID);

	void printAll();

	//gets the average number of days in all three courses from the student id
	void printAverageDaysInCourse(std::string studentID); 

	void printInvalidEmails();

	void printByDegreeProgram(DegreeProgram degreeProgram);

	void PrintClassRosterArray();

	//deconstructor
	~Roster();
	Roster();
	



	 

	

	

};



#endif // _ROSTER_H_