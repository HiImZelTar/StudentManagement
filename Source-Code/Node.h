#pragma once

#include <string>
#include <iostream>
using namespace std;

class Node
{
	friend class Folder;

	private:
		string m_strName;
		int m_strID;
		float m_fAverageMark;
		Node *next;

	public:
		Node();
		Node(string&,int&,float&);
};
