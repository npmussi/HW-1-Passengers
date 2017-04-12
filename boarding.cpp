#include <iostream>
#include <fstream>
#include "StackAr.h" 
#include "QueueAr.h"



int main (int argc, char **argv) //(*argv+1) contains a c-string of passenger file.
{
	/*
	Okay. We have a plane with 48 rows and 6 seats labeled A-F each row.
	The integrity of the files is guaranteed. The passenger files themselves have:
		Line 1: Listing of 6 zones of passengers from back to front, with random seat assigns in each zone.
		Line 2: Listing of all 288 passengers in random order.
		Line 3: Listing of three zones of 96 passengers. First zone window seats, second middle, third aisle. Otherwise random.
		All passengers begin boarding starting at row 1.
		It takes 5 seconds to move from one row to another iff the aisle is clear.
		After reaching their row, each passenger takes 10 seconds to store luggage.
			If a passenger blocks the way in a row to another passenger trying to sit in a seat on the other side of the first,
			then it takes 5 seconds for the seated passenger to get out, 5 seconds for the standing to sit, and 5 seconds for the previous sitting to sit again.
		
	*/
}