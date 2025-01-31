#include<stdio.h>
#include <syslog.h>

int main (int argc, char *argv[])
{
	/*
      openlog("Logs", LOG_PID, LOG_USER);
      syslog(LOG_INFO, "Start logging");
      closelog();
	*/

	if (3 == argc)
	{
		char *full_file_path = argv[1];
		char *string_to_be_written = argv[2];

		
		printf("Writing %s to %s\n", string_to_be_written, full_file_path);
		FILE *fptr;
		fptr = fopen(full_file_path, "w");
		if (fptr == NULL) {
			printf("Error opening file.\n");
			syslog(LOG_ERR, "Error opening file.");
			return 1;
		}
		fprintf(fptr, "%s", string_to_be_written);
		fclose(fptr);
		syslog(LOG_DEBUG, "Writing %s to %s", string_to_be_written, full_file_path);
	}
	else
	{
		syslog(LOG_ERR, "Insufficient Argument");
                printf ("Insufficient Argument\n");
		return 1;
	}

	return 0;
}
