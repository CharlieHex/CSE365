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

const char *keys[10];
const char *USER_EVENT_1[1];
const char *USER_EVENT_2[1];
const char *USER_EVENT_FINAL[1];
const char *USER_NAME[1];
const char *USER_KEY[1];


int main( int argc, char *argv[] )  {

//Loop Main until EOF. Possible while(!EOF)

// Handle Initial Command Line Input
    if( argc == 2 ) {
      printf("No key supplied");
   	}
    // Create an array for keys
   	else if( argc > 2 ) {
        
        char *serverOwner = argv[1];

        int count = 0;
        
        // Copy keys into memory
        for(int i = 2; i < argc; i++){
			keys[count] = argv[i];
            count++;
       	}
    }

   	else {
      	printf("At least one key expected.\n");
   	}

    //Loop until EOF. Possible while(!EOF)
    
    char USER_INPUT[50] = " ";

    int len = strlen(USER_INPUT);

    
    
    while (len != 0)
    {
        cout << "Please enter your input commands:\n";
        cin.getline(USER_INPUT, 50);
        //cout << "\nTESTING ECHO: " << USER_INPUT << "\n";
        len = strlen(USER_INPUT);
        //cout << "User input is " << len << " characters long.\n";
        if(len == 1)
            len = 0;
    }
    
    cout << "Goodbye.";



    // Convert USER_INPUT into an event, user and key
    // Read user input to end of line

    /*for (int ndx = 0; ndx <= UCHAR_MAX; ndx++)
        if (isspace(ndx)) printf(USER_INPUT[ndx], ndx);*/

}
