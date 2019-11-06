#pragma once
#include <iostream>
#include <list>
#include <string>
using namespace std;

class DecisionTreeNode; //הצהרה

class ValidAnswer
{
public:
	string ans;
	DecisionTreeNode* son;
	ValidAnswer()
	{
		ans = "";
		son = NULL;
	}
	friend DecisionTreeNode;
};

class DecisionTreeNode 
{
public:

	string value;
	bool isLeaf;
	list<ValidAnswer*> answersList;

	DecisionTreeNode() 
	{ isLeaf = false;
	  value = "";
	  answersList.empty;
	}
	friend Tree;

};

class Tree {

protected:
	DecisionTreeNode* Node;
public:
	Tree(string a,bool b) { Node->value=a; Node->isLeaf=b; };
	Tree() { Node->value=""; Node->isLeaf = false; };
	~Tree() { DeleteTree(); };
	void DeleteTree()
	{
		if (Node->isLeaf == true) delete Node;
		else
			Node->answersList.pop_back.DeleteTree;
	}
	DecisionTreeNode* searchAndPrint(string val)
	{
		if (val == Node->value)
			return Node;
		else
		{
			for (Node->answersList.begin; Node->answersList.end;)
			{
				if (val == Node->answersList.begin.ans)
					return Node;
			}
			
		}

	}

};