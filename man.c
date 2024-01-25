#include <stdio.h>
#include <string.h>

// Function prototypes
void showManPage(char *command);
int handleManPageRequest(int argc, char *argv[]);

// Structure to store command information
struct CommandInfo {
    char *name;
    char *description;
};

// Array of CommandInfo structures
struct CommandInfo commands[] = {
    {"ls", "List directory contents"},
    {"cd", "Change the current working directory"},
    {"env", "Display environment variables"},
    // Add more commands as needed
    {NULL, NULL} // Terminate the array with NULL values
};

// New function to handle man page requests
int handleManPageRequest(int argc, char *argv[]){
    // check if command was provided
    if (argc < 2){
        fprintf(stderr, "No command provided\n");
        return 1;
    }
    // Show the man page for the specified command
    showManPage(argv[1]);
    return 0;

}

// Function to display the man page for a command
void showManPage(char *command) {
    int i = 0;

    // Search for the command in the array
    while (commands[i].name != NULL) {
        if (strcmp(command, commands[i].name) == 0) {
            // Print the man page
            printf("MAN PAGE: %s\n", commands[i].name);
            printf("%s\n", commands[i].description);
            return;
        }
        i++;
    }

    // Command not found
    fprintf(stderr, "Man page not found for command: %s\n", command);
}

