
#ifndef _ROSTER_H_
#define _ROSTER_H_
#include <string>
#include "degree.h"
#include "student.h"

class Roster
{

public:
	void add(Student thisStudent);

	// should remove students from the roster by studentId 
	// if studentID dosent exist then print and error message
	// including that the "student" was not found.
	void remove(Student studentToRemove);

	void printAll();

	//gets the average number of days in all three courses from the student id
	void printAverageDaysInCourse(std::string studentID); 

	void printInvalidEmails();

	void printByDegreeProgram(DegreeProgram degreeProgram);

	void PrintClassRosterArray();


private:
	/*Student classRosterArray[];*/

};



#endif // _ROSTER_H_