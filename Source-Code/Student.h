#pragma once
#include <string>

class Student
{
private:
    std::string m_strName;
    int m_iID;
    float m_fAverageMark;
protected:
    void SetName(std::string strName);
    void SetID(int iID);
    void SetAverageMark(float fAverageMark);
public:
    Student();
    Student(std::string strName, int iID, float fAverageMark);
    ~Student();
    std::string GetName();
    int GetID();
    float GetAverageMark();
};
