
// Must declare the deconstructor function in the base class virtual.
// This helps to release all resources in the derived class when deleting pointer.


#include <string.h>
#include <stdio.h>
#include <iostream>

// base class
class TimeKeeper
{
public:
	TimeKeeper();
	virtual ~TimeKeeper();
};

// derived class
class AtomicClock : public TimeKeeper {};
class WaterClock : public TimeKeeper {};
class WristWatch : public TimeKeeper {};

// get a base-class pointer that points to the derived class
TimeKeeper* getTimeKeeper(void)
{
	AtomicClock* pClock = new AtomicClock();
	return (TimeKeeper*) pClock;
}

void main()
{
	TimeKeeper* pTimer = getTimeKeeper();
	if (pTimer) delete pTimer;	// because of virtual deconstructor, all resources in the 
								// derived class are also released
}

