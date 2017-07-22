#include <string>
#include <list>

// Make sure that any object should be initialized before using.
// The variables without initialization are often initialized by compiler,
// but sometimes not ==> the program acts undefinedly.

// Example 1: variable initialization
int x = 0;
const char* test = "A C-style string";

// Example 2: class member initialization
class PhoneNumber {};

class ABEntry
{
public:
	ABEntry(const std::string& name,
		const std::string& address,
		const std::list<PhoneNumber>& phones)
	{
		m_name = name;
		m_address = address;
		m_phones = phones;
	}

private:
	std::string m_name;
	std::string m_address;
	std::list<PhoneNumber> m_phones;
};
