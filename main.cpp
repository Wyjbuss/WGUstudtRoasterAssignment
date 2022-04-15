#include <iostream>
#include "student.h"
#include "roster.h"
using namespace std;

const string studentData[] = { "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", 
							"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", 
							"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", 
							"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", 
							"A5,Wyatt,Bussell,wbusse4@wgu.edu,26,4,10,20,SOFTWARE" };

int main()
{
	cout << "Course Title: Scripting and Programming - Applications - C867" << endl;
	cout << "Programming Language Used: C++" << endl;
	cout << "WGU Student ID: 010218289" << endl;
	cout << "My Name: Wyatt Bussell" << endl;
	cout << "-------------------------------------------------------------" << endl;

	//Roster classRoster;
	Student bob;
	bob.set_degreeProgram(DegreeProgram::NETWORK);
	bob.set_numDaysToComplete(23, 2, 15);
	bob.print();
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
	
	
	return 0;
}
