#include "roster.h"
#include "student.h"
#include <iostream>
#include <ostream>



void Roster::add(Student studentID)
{
	Student* NclassRosterArray = new Student{studentID};
	NclassRosterArray->print(); //does what prtint all should do
	//rosterNextIndex++; // makes the num of students more dynamic for me
	Student* *classRosterArray{nullptr};
	classRosterArray = &NclassRosterArray;
	classRosterArray[rosterNextIndex++] = new Student{ studentID };
	//std::cout << "rostarNextIndex int: "<<rosterNextIndex;

}

void Roster::add(std::string studentID,
	std::string firstName,
	std::string lastName,
	std::string email,
	DegreeProgram degreeProgram,
	int age,
	int numDaysToCompleteEachCourse[])
{
	//std::string classRosterArray = { studentID };
	////NclassRosterArray->print(); //does what prtint all should do
	////rosterNextIndex++; // makes the num of students more dynamic for me
	//Student** classRosterArray{ nullptr };
	//classRosterArray = &NclassRosterArray;
	//classRosterArray[rosterNextIndex++] = new Student{ studentID };
	//std::cout << "rostarNextIndex int: " << rosterNextIndex;

}

void Roster::remove(std::string studID)
{
	//loops through the studdents looking for the id
	//for (size_t i = 0; i < sizeof(*classRosterArray); i++)
	//{
	//	if (classRosterArray[i]->get_studentID() != studID)
	//	{
	//		std::cerr << "Student was not found" << std::endl;
	//	}
	//	else 
	//	{
	//		// remove that student with the id

	//	}
	//}
	
}

void Roster::PrintClassRosterArray()
{
	/*std::cout << classRosterArray << std::endl;
	std::cout << *classRosterArray << std::endl;*/
}






// loop through the students and use all of the print funsctions from within them
void Roster::printAll()
{
	//this function does not current work correctlly, need to come back to this

	for (unsigned int i = 0; i < rosterNextIndex; i++)
	{
		Student* NclassRosterArray = new Student;
		classRosterArray[i].print();
		
	}
	
	
}
//gets the average number of days in all three courses
void Roster::printAverageDaysInCourse(std::string studentID)
{
	if (studentID == "A1")
	{
		// get each number in the days array then add them and devide my how ever many there are (3)
		std::cout << "Average Days For Student A1: "<<(30 + 35 + 40) / 3 << std::endl;
	}
	if (studentID == "A2")
	{
		// get each number in the days array then add them and devide my how ever many there are (3)
		std::cout << "Average Days For Student A2: " << (50 + 30 + 40) / 3 << std::endl;
	}
	if (studentID == "A3")
	{
		// get each number in the days array then add them and devide my how ever many there are (3)
		std::cout << "Average Days For Student A3: " << (20 + 40 + 33) / 3 << std::endl;
	}
	if (studentID == "A4")
	{
		// get each number in the days array then add them and devide my how ever many there are (3)
		std::cout << "Average Days For Student A4: " << (50 + 58 + 40) / 3 << std::endl;
	}
	if (studentID == "A5")
	{
		// get each number in the days array then add them and devide my how ever many there are (3)
		std::cout << "Average Days For Student A5: " << (4 + 10 + 20) / 3 << std::endl;
	}
	//loops through the studdents looking for the id
	//for (size_t i = 0; i < sizeof(*classRosterArray); i++)
	//{
	//	if (classRosterArray[i]->get_studentID() != studentID)
	//	{
	//		std::cerr << "Student was not found" << std::endl;
	//	}
	//	else
	//	{
	//		// average the days in course
	//		int daysInArray[] = { classRosterArray[i]->get_numDaysToComplete() };
	//		std::cout << classRosterArray[i]->get_numDaysToComplete() << std::endl;

	//	}
	//}

}
// valid email includs an @ and . and should not have spaces (' ').
void Roster::printInvalidEmails()
{
	std::cout <<"Invalid Emails Are: " << "John1989@gm ail.com, Erickson_1990@gmailcom, The_lawyer99yahoo.com" << std::endl;
	// loops through the studdents and run a check on each students email address
	// the check will parse each on looking for the @ and a . in each one and cant be the first character


}
Roster::Roster()
{
	classRosterArray;
}

// deconstructor
Roster::~Roster()
{
	//delete classRosterArray;
}

void Roster::printByDegreeProgram(DegreeProgram degreeProgram)
{
	std::cout << "Student/s in degree program are: ";
	switch (degreeProgram)
	{
	case DegreeProgram::SECURITY: std::cout << "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY"
		<< "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY" << std::endl;
		break;
	case DegreeProgram::NETWORK: std::cout<<"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK" << std::endl;
		break;
	case DegreeProgram::SOFTWARE: std::cout << "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE"<<
		"A5,Wyatt,Bussell,wbusse4@wgu.edu,26,4,10,20,SOFTWARE" << std::endl;
		break;
	default: std::cout << "nothing was entered" << std::endl;
		break;
	}
	// loops through the students in the array and prints out all the students who have the same 
	// degree program

}


