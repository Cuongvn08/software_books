#include <vector>

// use const whenever possible
void main(void)
{
	// Example 1
	char greeting[] = "Hello";

	char* p1 = greeting; // non-const data
						 // non-const pointer

	const char* p2 = greeting;	// const data
								// non-const data

	char* const p3 = greeting;	// non-const data
								// const pointer

	const char* const p4 = greeting; // const data
									 // const pointer

	// Example 2
	std::vector<int> vec;

	// this is suitable in case of iterator is const
	const std::vector<int>::iterator iter1 = vec.begin();
	*iter1 = 10; // OKAY
	++iter1;	 // error due to iter is const

	// this is suitable in case of the value iterator points to is const
	std::vector<int>::const_iterator iter2 = vec.begin();
	*iter2 = 10; // error due to the value iter points to is const	
	++iter2;	 // OKAY
}

