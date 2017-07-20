#include <string>

// Example 1: pre const to #define
#define ASPECT_RATIO_1 1.653 // not recommended to use due to variable's name is 
							 // not generated when error occurs => difficult to debug
const double ASPECT_RATIO_2 = 1.653; // recommended to use 


// Example 2: use one of these ways below to declare a const char* or string
const char* const authorName_1 = "Scott Meyers";
const std::string authorName_2("Scott Meyers");
