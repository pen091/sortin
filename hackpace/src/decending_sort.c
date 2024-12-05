/* decending function definition */
#include <stdio.h>

void decending_sort(int s[], int n) {
	int i, j, tmp;

	for (i=0; i<n; i++)
		scanf("%d", &s[i]); /* scan input */

	for (i=0; i<n; i++) {
		for (j=0; j+1 < n; j++) {
			if (s[j] < s[i])
			{
				tmp = s[j];
				s[j] = s[i];
				s[i] = tmp;
			}
		}
	}

	for (i=0; i<n; i++)
		printf("%d ", s[i]); /* print values */

	printf("\n\n");
}


