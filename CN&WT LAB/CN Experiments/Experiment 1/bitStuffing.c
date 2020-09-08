#include <stdio.h>

int main() {
	int s;
	int k = 0;
	int count = 0;
	int bits[50];
	int bitsA[100];
	printf("Enter frame size:");
	scanf("%d", &s);

	printf("Enter data:");

	for(int i = 0; i < s; i++) {
		scanf("%d", &bits[i]);
	}

	for(int i = 0; i < s; i++) {
		bitsA[k] = bits[i];
		if( bits[i] == 1) {
			count += 1;
		} else {
			count = 0;
		}

		if (count == 5) {
			k++;
			bitsA[k] = 0;
			count = 0;
		}
		k++;
	}

	printf("Data after bit stuffing : 01111110");
	for(int  i = 0; i < k; i++) {
		printf("%d", bitsA[i]);
	}
	printf("01111110\n");


	printf("Data at the receiver : 01111110");
	for(int  i = 0; i < k; i++) {
                printf("%d", bitsA[i]);
        }
        printf("01111110\n");

	printf("Data After de-stuffing :");


	int c = 0;

	for(int i = 0; i < k; i++) {
		if(bitsA[i] == 1) {
			c++;
		}
		else {
			c = 0;
		}

		printf("%d", bitsA[i]);

		if(c == 5) {
			i++;
		}
	}

	return 0;
}






