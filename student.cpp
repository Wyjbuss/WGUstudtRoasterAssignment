
#include "student.h"
#include <iostream>

//unsigned int studentID;
//std::string firstName;
//std::string lastName;
//std::string email;
//std::string degreeProgram;
//unsigned int age;
//int numDaysToCompleteEachCourse;

//default construstor
Student::Student()
{
	studentID = "-1";
	firstName = "noNameF";
	lastName = "noNameL";
	email = "noEmail@NuN.null";
	degreeProgram = DegreeProgram::SOFTWARE;
	age = -1;
	numDaysToCompleteEachCourse[0] = 0;

}
Student::Student(
	std::string NstudentID, 
	std::string NfirstName, 
	std::string NlastName, 
	std::string Nemail, 
	DegreeProgram NdegreeProgram, 
	int Nage,
	int NnumDaysToCompleteEachCourse[])
{
	studentID = NstudentID;
	firstName = NfirstName;
	lastName = NlastName;
	email = Nemail;
	degreeProgram = NdegreeProgram;
	age = Nage;
	numDaysToCompleteEachCourse[3] = NnumDaysToCompleteEachCourse[3];
}
void Student::print()
{
	std::cout << studentID << "    ";
	std::cout << "First Name: " <<firstName << "    ";
	std::cout << "Last Name: " <<lastName << "    ";
	std::cout << "Age: " << age << "    ";
	std::cout << "daysInCourse: " << numDaysToCompleteEachCourse << std::endl;
	std::cout << "Degree Program: " << &degreeProgram << std::endl;
	
	
}

void Student::set_studentID( std::string id)
{
	studentID = id;
}

void Student::set_firstName(std::string nFirstName)
{
	firstName = nFirstName;
}

void Student::set_lastName(std::string nLastName)
{
	lastName = nLastName;
}

void Student::set_email(std::string nEmail)
{
	email = nEmail;
}

void Student::set_degreeProgram(DegreeProgram nDegreeProgram)
{
	// this may relate to the enum in degree
	degreeProgram = nDegreeProgram;
}

void Student::set_name( int nAge)
{
	age = nAge;
}
// is supposed to take in each day when setting it then add them to the array
void Student::set_numDaysToComplete(int daysInCourse1, int daysInCourse2, int daysInCourse3)
{
	numDaysToCompleteEachCourse[0] = daysInCourse1;
	numDaysToCompleteEachCourse[1] = daysInCourse2;
	numDaysToCompleteEachCourse[2] = daysInCourse3;
	std::cout << numDaysToCompleteEachCourse[0];
	std::cout << numDaysToCompleteEachCourse[1];
	std::cout << numDaysToCompleteEachCourse[2];
}


//start getters
std::string Student::get_studentID() 
{
	return studentID;
}

std::string Student::get_firstName()
{
	return firstName;
}

std::string Student::get_lastName()
{
	return lastName;
}

std::string Student::get_email()
{
	return email;
}

DegreeProgram Student::get_degreeProgram()
{
	return degreeProgram;
}

int Student::get_age()
{
	return age;
}

int Student::get_numDaysToComplete()
{
	return numDaysToCompleteEachCourse[3];
}
