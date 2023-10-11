#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *str_concat(char *s1, char *s2)
{
	char *rtn;
	int p, q = 0;

	if (s1 == NULL) s1 = "";
	if (s2 == NULL) s2 = "";

	rtn = malloc(strlen(s1) + strlen(s2) + 1);

	if (rtn == NULL)
	{
		return (NULL);
	}


	for (p = 0; (rtn[q] = s1[p]) != '\0'; ++p, ++q) {}

	for (p = 0; (rtn[q] = s2[p]) != '\0'; ++p, ++q) {}
			
	return (rtn);
}
