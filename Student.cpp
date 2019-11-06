#include "Student.h"

#pragma warning(disable: 4996)


Student::~Student()
{
}


Student::Student(int accountNum , string fname , string lname)
{
	setAccountNumber(accountNum);
	setName(fname);
	setLname(lname);
	setKurs();
}
void Student::setKurs()
{
	for (int i = 0; i < 5; i++)
		Kurs[i] = false;
}

void Student::setAccountNumber(int accountNum)
{
	accountNumber = accountNum;
}

int Student::getAccountNumber() const
{
	return accountNumber;
}

void Student::setName(string Name)
{
	strcpy(fname, Name.c_str());
}
void Student::setLname(string Name)
{
	strcpy(lname, Name.c_str());
}

string Student::getName() const
{
	return fname;
}
string Student::getLname() const
{
	return lname;
}


void Student::getKurs() const
{
	for (int i = 0; i < 5; i++)
	{
		if (Kurs[i])
		cout << i+1 << ":Y " ;
		else
			cout << i+1 << ":N ";
	}
}

ostream& operator<<(ostream& os, Student& stud)
{
	os << stud.accountNumber << '\t' << stud.lname << '\t' << stud.fname << '\t';
	for (int i = 0; i < 5; i++)
	{
		if (stud.Kurs[i])
	os<<i + 1 << ":Y ";
		else
	os<< i + 1 << ":N ";
	}
	os << endl;
 return os;
}
void Student:: setKur()
{
	bool b;
	
	for (int i = 0; i < 5; i++)
	{
		cin >> b;
		Kurs[i] = b;
	
	}


}




