#include <stdio.h>
#include <string.h>

int main() {
	int i;
	int frames;
	char data[25][25];

	printf("Enter the number of frames:");
	scanf("%d", &frames);

	for(i = 0; i < frames; i++){
		printf("frame%d:", i + 1);
		scanf("%s", &data[i]);
		
	}

	
	printf("\nAT THE SENDER \n");
	printf("Data as frames:\n");

	for (i = 0; i < frames; i++) {
		printf("frame%d:", i + 1);
		printf("%d", strlen(data[i]) + 1);
		printf("%s\n", data[i]);
	}

	printf("\nAT THE RECEIVER \n The data received. \n The data in frame form: \n");
	for(i = 0; i < frames; i++) {
		printf("frame%d:", i + 1);
        	printf("%s\n", data[i]);
	}

	printf("The data after removing count char:");
	for(i= 0; i < frames; i++) {
		 printf("%s ", data[i]);
	}




	return 0;

}
