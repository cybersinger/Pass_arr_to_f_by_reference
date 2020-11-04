#include <stdio.h>

int brojanje(int* fniz[5], int fkey) {
	printf("Primljen prvi broj niza: %d\n", fniz[0]);
	int j, ctr = 0;
	for (j = 0; j < 5; j++) {
		if (fniz[j] == fkey)
			ctr++;
	}

	if (ctr == 0)
		printf("Trazeni broj nije u nizu.\n");
	else
		printf("Trazeni broj se u nizu nalazi %d puta.\n", ctr);
}

main()
{
	int niz[5];
	int keyNr;
	int i;

	printf("Unesi 5 celih brojeva (broj pa Enter): \n");
	for (i = 0; i < 5; i++)
		scanf_s("%d", &niz[i]);

	printf("Sad unesi zeljeni broj za pretragu: \n");
	scanf_s("%d", &keyNr);

	brojanje(&niz, keyNr);

}