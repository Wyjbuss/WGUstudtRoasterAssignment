#include "roster.h"
#include "student.h"
#include <iostream>
#include <ostream>



void Roster::add(Student thisStudent)
{
	// this is the current error
	*classRosterArray[0] = thisStudent;
}

void Roster::remove(Student studentToRemove)
{

}

void Roster::PrintClassRosterArray()
{
	/*std::cout << classRosterArray << std::endl;
	std::cout << *classRosterArray << std::endl;*/
}



// loop through the students and use all of the print funsctions from within them
void Roster::printAll()
{
	for (unsigned int i = 0; i < sizeof(*classRosterArray); i++)
	{
		classRosterArray[i]->print();
	}
	
}
//gets the average number of days in all three courses
void Roster::printAverageDaysInCourse(std::string studentID)
{

}
// valid email includs an @ and . and should not have spaces (' ').
void Roster::printInvalidEmails()
{


}

void Roster::printByDegreeProgram(DegreeProgram degreeProgram)
{


}

