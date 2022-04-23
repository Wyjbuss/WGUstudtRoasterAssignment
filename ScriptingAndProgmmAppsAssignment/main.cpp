#include <iostream>
#include "student.h"
#include "roster.h"


const std::string studentData[] = { "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
							"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", 
							"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", 
							"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", 
							"A5,Wyatt,Bussell,wbusse4@wgu.edu,26,4,10,20,SOFTWARE" };

int main()
{
	std::cout << "Course Title: Scripting and Programming - Applications - C867" << std::endl;
	std::cout << "Programming Language Used: C++" << std::endl;
	std::cout << "WGU Student ID: 010218289" << std::endl;
	std::cout << "My Name: Wyatt Bussell" << std::endl;
	std::cout << "-------------------------------------------------------------" << std::endl;
	
	
	// this opporation loops throrugh the array and prints out the items in the array
	// hard coded to loop 5 times
	for (unsigned int i = 0; i < 5; i++)
	{
		for (int x = 0; x < studentData->at(x); x++)
		{
			if (studentData->at(i) == ',')
			{
				std::cout << studentData->at(x);
			}
			
		}
	}
	std::cout << std::endl;
	
	Student A1;
	A1.set_degreeProgram(DegreeProgram::SECURITY);
	A1.set_numDaysToComplete(30, 35, 40);
	A1.set_age(20);
	A1.set_firstName("John");
	A1.set_lastName("Smith");
	A1.set_email("John1989@gm ail.com");
	A1.set_studentID("A1");
	A1.print();

	Student A2;
	A2.set_degreeProgram(DegreeProgram::NETWORK);
	A2.set_numDaysToComplete(50, 30, 40);
	A2.set_age(19);
	A2.set_firstName("Suzan");
	A2.set_lastName("Erickson");
	A2.set_email("Erickson_1990@gmailcom");
	A2.set_studentID("A2");
	A2.print();

	Student A3;
	A3.set_degreeProgram(DegreeProgram::SOFTWARE);
	A3.set_numDaysToComplete(20, 40, 33);
	A3.set_age(19);
	A3.set_firstName("Jack");
	A3.set_lastName("Napoli");
	A3.set_email("The_lawyer99yahoo.com");
	A3.set_studentID("A3");
	A3.print();

	Student A4;
	A4.set_degreeProgram(DegreeProgram::SECURITY);
	A4.set_numDaysToComplete(50, 58, 40);
	A4.set_age(22);
	A4.set_firstName("Erin");
	A4.set_lastName("Black");
	A4.set_email("Erin.black@comcast.net");
	A4.set_studentID("A4");
	A4.print();

	Student A5;
	A5.set_degreeProgram(DegreeProgram::SOFTWARE);
	A5.set_numDaysToComplete(4, 10, 20);
	A5.set_age(26);
	A5.set_firstName("Wyatt");
	A5.set_lastName("Bussell");
	A5.set_email("wbusse4@wgu.edu");
	A5.set_studentID("A5");
	A5.print();
	std::cout << std::endl;

	Roster classRoster;
	classRoster.add(A1);
	classRoster.add(A2);
	classRoster.add(A3);
	classRoster.add(A4);
	classRoster.add(A5);

	/*classRoster.add(bob.get_studentID(),bob.get_firstName(),bob.get_lastName(),bob.get_email(),
					bob.get_age(),bob.get_numDaysToComplete(), bob.get_numDaysToComplete() + 1,
					bob.get_numDaysToComplete() + 2,bob.get_degreeProgram());*/
	std::cout << std::endl;
	classRoster.printAverageDaysInCourse("A3");
	classRoster.printInvalidEmails();
	//classRoster.printAll();
	//for (size_t i = 0; i < sizeof(studentData); i++)
	//{
 //		string student = studentData[i];
	//	for (size_t i = 0; i < sizeof(student); i++)
	//	{
	//		string piceOfData = &student[i];
	//		int position = piceOfData.find(",");
	//		string substring = piceOfData.substr(0, position);
	//		cout << substring << endl;
	//	}
	//	
	//}
	// calling a deconstructor
	//classRoster.~Roster();
	
	return 0;
}
