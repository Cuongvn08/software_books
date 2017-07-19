#include <iostream>

// Prefer inline function to macro define
// max1 and max2 look like same but actually different when param is an impression

#define max1(a,b) ((a) > (b) ? (a) : (b)) 

template<class T>
inline const T& max2(const T& a, const T& b)
{
	return a > b ? a : b;
}


int main()
{
	int a1 = 5;
	int a2 = 5;

	max1(++a1, 0); // a1 is incremented twice: a1 = 7
	max2(++a2, 0); // a2 is incremented once:  a2 = 6

	max1(++a1, 10);  // a1 is incremented once: a1 = 8
	max2(++a2, 10);  // a2 is incremented once: a2 = 7
}


