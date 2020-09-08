#include <stdio.h>
#include <string.h>

int main() {
	int count = 0;
	char bits[50];


	printf("Enter data:");
	scanf("%s", bits);

	int len = strlen(bits);
	

	printf("Data at the Sender: DLESTX");
	printf("%s", bits);
	printf("DLEETX\n");

	printf("Data after character stuffing : DLESTX");

	       for (int i = 0; i < len; i++) {
		       printf("%c", bits[i]);

                if (bits[i] == 'D') {
                        count += 1;
                }

                else if (bits[i] == 'L' && count == 1) {
                        count += 1;
                }

                else if (bits[i] == 'E' && count == 2) {
                        count += 1;
                        printf("DLE");
                }

                else  {
                        count == 0;
                }

        }
	printf("DLEETX\n");


	printf("Data at the Receiver after de-stuffing : DLESTX");
        printf("%s", bits);
        printf("DLEETX\n");


	return 0;
}
