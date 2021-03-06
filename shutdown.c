#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(int argc, char * argv[])
{
	if(argc == 1 || argc > 2){
		printf("Put in the number of minutes until shutdown after program name.\n");
		printf("Example: shutdown.exe 60\n");
		printf("-> means shutdown in 60 minutes.\n");
		return 0;
	}
	if(!strcmp(argv[1], "cancel")){
		printf("Canceled scheduled shutdown.\n");
		system("C:/WINDOWS/System32/shutdown /a");
		return 0;
	}
	int minutes = atoi(argv[1]);
	if(minutes == 0){
		printf("Input error. Need a number of minutes.\n");
		return 0;
	}else{
		int numSeconds = minutes * 60;
		char buffer[10];
		snprintf(buffer, 10, "%d", numSeconds);
		char command[35];
		strcpy(command, "C:/WINDOWS/System32/shutdown /s /t ");
		//printf("%d", seconds);
		strcat(command, buffer);
		//printf("%s", command); 
		system(command); 
		return 0;
	}
}
