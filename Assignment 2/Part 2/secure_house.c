/*  Title:       secure_house
	Name:        Luis Dominguez
	Date:        2/3/2021
    Description: This program will simulate a security policy
    --------------------------------------------------------------------------------
*/

#include <cstring>
#include <string>
#include <iostream>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

using namespace std; 

// Server owner keys
const char *keys[10];

// String literals
char fireKey[] = "FIREFIGHTER_SECRET_KEY";
// Allocate space for four user arguments
const char *USER_EVENT[4];

int main( int argc, char *argv[] )  {

// Handle Initial Command Line Input
    if( argc == 2 ) {
      printf("No key supplied");
   	}
    // Create an array for keys
   	else if( argc > 2 ) {
        
        // Assign server owner for later re-keying function
        char *serverOwner = argv[1];

        // Copy keys into memory
        int count = 0;

        for(int i = 2; i < argc; i++){
			keys[count] = argv[i];
            count++;
       	}
    }
   	else {
      	printf("At least one key expected.\n");
   	}
    
    //Local array for command line input
    char USER_INPUT[50] = " ";

    int len = strlen(USER_INPUT);
    
    //Loop until EOF.-----------------------------------------------
    while (len != 0)
    {
        //cout << "Please enter your commands:\n";
        // Get the user from the input
        cin.getline(USER_INPUT, 50);
        len = strlen(USER_INPUT);
        //if user hits a newline, end program.
        if(len == 1)
            len = 0;

        // Convert USER_INPUT into an event, user and key-----------
        
        // Initialiaze Word Counter
        int word = 1;
        //Loop through user input to count words
        for(int i = 0; i <= len; i++){
            if(USER_INPUT[i] == ' '){
                word++;
            }
        }
        printf("TEST: USER ENTERED: %s\n", USER_INPUT);
        printf("TEST: fireKey is: %s\n", fireKey);
        
        //copy strings

        //switch on number of words
        switch(word) {
            case 1 :
                //printf("TEST: ONE WORD PROCEDURE\n" );
                    if(strcmp(USER_INPUT,fireKey) == 0)
                        cout << "FIRE FIGHTER KEY ENTERED\n";
                    else{
                        cout << "ERROR\n";
                    }
                break;
            case 2 :
                printf("TWO WORD PROCEDURE\n" );
                    //turn key
                    //enter house
                    //who's inside
                    //change locks
                    //error
                break;
            case 3 :
                printf("THREE WORD PROCEDURE\n" );
                break;
            case 4 :
                printf("FOUR WORD PROCEDURE\n" );
                break;
            default :
                printf("ERROR\n" );
        }

    }
    
    cout << "Goodbye.\n";

}
