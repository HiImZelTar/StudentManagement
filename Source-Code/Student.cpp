#include "Student.h"
#include <iostream>

using namespace std;

Student::Student()
{
	m_strName = "";
	m_strID = "";
	m_fAverageMark = 0;
}

Student::Student(std::string strName, std::string strID, float fAverageMark)
{
	m_strName = strName;
	m_strID = strID;
	m_fAverageMark = fAverageMark;
}

Student::~Student()
{
}

std::string Student::GetName()
{
	return m_strName;
}

std::string Student::GetID()
{
	return m_strID;
}

float Student::GetAverageMark()
{
	return m_fAverageMark;
}

void Student::SetName(std::string strName)
{
	m_strName = strName;
}

void Student::SetID(std::string strID)
{
	m_strID = strID;
}

void Student::SetAverageMark(float fAverageMark)
{
	m_fAverageMark = fAverageMark;
}

void Student::Input()
{
	cout << "Input student's name: ";
	getline(cin, m_strName, '\n');
	cout << "Input student's ID: ";
	getline(cin, m_strID, '\n');
	cout << "Input student's average mark: ";
	cin >> m_fAverageMark;
}

void Student::Output()
{
	cout << "Student's name: " << m_strName << endl;
	cout << "ID: " << m_strID << endl;
	cout << "Average mark: " << m_fAverageMark << endl;
}