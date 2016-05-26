#include "Node.h"

Node::Node()
{

}

Node::Node(string& n,int& i,float& a)
{
	m_strName = n;
	m_strID = i;
	m_fAverageMark = a;
	next = NULL;
}
