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


const char *USER_EVENT_1[1];
const char *USER_EVENT_2[1];
const char *USER_EVENT_FINAL[1];
const char *USER_NAME[1];
const char *USER_KEY[1];


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
        cout << "Please enter your input commands:\n";
        // Get the user from the input
        cin.getline(USER_INPUT, 50);
        len = strlen(USER_INPUT);
        //cout << "User input is " << len << " characters long.\n";
        if(len == 1)
            len = 0;

        // Convert USER_INPUT into an event, user and key

    }
    
    cout << "Goodbye.";



    // Convert USER_INPUT into an event, user and key
    // Read user input to end of line

}
