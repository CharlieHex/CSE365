/*  Title:       command
	Name:        Luis Dominguez
	Date:        1/24/2021
    Description: This program will count command line args, display the number
                    of args and then display the args in reverse order.
    --------------------------------------------------------------------------------
*/
#include <iostream>

int main( int argc, char *argv[] )  {

	
	if( argc == 2 ) {
      printf("No key supplied");
   	}
   	else if( argc > 2 ) {
		for(int i = 2; i < argc; i++){
			printf("TESTING: The key supplied is: %s\n", argv[i]);
	   	}
   	}
      
   	else {
      	printf("One argument expected.\n");
   	}
}
