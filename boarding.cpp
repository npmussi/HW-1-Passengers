#include <iostream>
#include <fstream>
#include "StackAr.h" 
#include "QueueAr.h"

class Row 
{
	public:
	
	private:
}

QueueAr& FillQueue (QueueAr& rows, char** argv)
{
	std::ifstream myfile;
	char row_num = 0;
	int seat_letter = 0;
	
	myfile.open(*(argv+1)); //Uses inputted file name in command line; second argument.
	
	for ()
	{
		
	}
} 

int main (int argc, char **argv) //(*argv+1) contains a c-string of passenger file.
{
	/*
	Creation:
		It is recommended that we create a Row class that contains the following data:
			1. Data structures for each side of the aisle (A-C on left, D-F on right), have values for people in seat (just use bitwise operations using 8-bit char)
			2. Data structures for passengers that are getting up for person in aisle (reversed stack, Last In, First Out)
			3. Storage for passenger in the aisle (passenger data is their seat, 0 if none)
			4. Enum for row's current state 
		We should have an ARBITRARY NUMBER OF ROWS for the plane put into a circular queue. 
		There's a universal clock. Every clock tick is five seconds; at the end of our main
			loop, we have one clock tick. 
			
	File I/O:
		The integrity of the files is guaranteed. The passenger files themselves have:
		Line 1: Listing of 6 zones of passengers from back to front, with random seat assigns in each zone.
		Line 2: Listing of all 288 passengers in random order.
		Line 3: Listing of three zones of 96 passengers. First zone window seats, second middle, third aisle. Otherwise random.
		We only need to use the file exactly one in function FillQueue
		
	Initialization:
		1. Set time to zero, set num_rows to 3 or 48.
		2. Initialize our method of storing all the rows. We would have to use a circular queue.
			To iterate through a circular queue, just dequeue and enqueue the row again. Check
			if we're at the first row to end it. This means we will use a do-while loop while(curr_row.number !=1)
		3. 
	Loop:
		All passengers begin boarding starting at row 1.
		There will be a function that loops until all passengers are seated-
			that is, all passengers are seated or there's nobody in the aisle.
		We will go through each and every single row and update its current state.
	*/
	
	long int time = 0;
	const int num_rows = 3;
	QueueAr rows(num_rows);
}