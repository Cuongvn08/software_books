#include <string.h>
#include <stdio.h>
#include <iostream>

// Class automatically generates its constructor, copy-constructor function,
// copy-assignment operator and deconstructor.
// Action of copy constructor and copy assignment operator is same.

// Example 1: Empty1 is same with Empty2
class Empty1 {};

class Empty2
{
public:
	Empty2() {}	// default constructor
	Empty2(const Empty2& rhs) {} // copy constructor
	~Empty2() {}; // deconstructor

	Empty2& operator = (const Empty2& rhs) {} // copy assigment operator
};


Empty2 e1;
Empty2 e2(e1); // copy constructor
Empty2 e3 = e1; // copy assignment constructor



// Example 2
template<typename T>
class NamedObject
{
public:
	NamedObject(const char* name, const T& value){
		m_name = name;
		m_value = value;
	}

	NamedObject(const std::string& name, const T& value){
		m_name = name;
		m_value = value;
	}

private:
	std::string m_name;
	T m_value;
};

int main(void)
{
	NamedObject<int> no1("Smallest Prime Number", 2); // no1.m_name=Smallest Prime Number; no1.value=2;
	NamedObject<int> no2(no1);  // no2.m_name=Smallest Prime Number; no2.value=2;
	NamedObject<int> no3 = no1; // no3.m_name=Smallest Prime Number; no3.value=2;

	return 0;
}