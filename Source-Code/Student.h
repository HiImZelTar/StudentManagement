#pragma once
#include <string>

class Student
{
private:
	std::string m_strName;
	std::string m_strID;
	float m_fAverageMark;
public:
	Student();
	Student(std::string strName, std::string strID, float fAverageMark);
	~Student();
	std::string GetName();
	std::string GetID();
	float GetAverageMark();
	void SetName(std::string strName);
	void SetID(std::string strID);
	void SetAverageMark(float fAverageMark);
	void Input();
	void Output();
};

