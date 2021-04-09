#include "Project_typedefs.h"

//REFER TO THE ARDUINO CODE TO CHECK THE BIT CHECK.

/*
parameters:
-flagbyte fset
--this is the byte that will be checked.

-int bit
--this is the bit you want to check.
*/
bool checkFlags(flagbyte fset, int bit);

/*
-flagbyte fset
--flag you want to modify.

-int bit
--bit you want to alter.

-int value
--new value of the bit.
*/
void setFlag(flagbyte fset, int bit, int value);