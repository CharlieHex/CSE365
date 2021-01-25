/*  Title:       command
	Name:        Luis Dominguez
	Date:        1/24/2021
    Description: This program will count command line args, display the number
                    of args and then display the args in reverse order.
    --------------------------------------------------------------------------------
*/
#include <iostream>

using namespace std;

#include <stdio.h>

int main( int argc, char *argv[] )
{
     	cout << argc-1 << endl;

	int counter = argc-1;
	for(int i = argc-1; i > 0; i-- )
	{
		cout << argv[counter] << " ";
       		counter--;
	}
	cout << endl;
	return 0;
}
