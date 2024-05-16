#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char    *ft_strdup(char *src)
{
	int i = 0;
	int j = 0;
	char *dup;

	if (!src)
		return (NULL);
	while (src[i] != '\0')
		i++;
	dup = (char *)malloc ((i+1) * sizeof(char));
	if (!dup)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
		dup[j++] = src[i++];
	dup[j] = '\0';
	return(dup);
}
/*
int main(void)
{
	char str[] = "hello hello";
	char *dup = ft_strdup (str);
	printf ("%s\n", dup);
	printf ("%s\n", strdup (str));
}
*/

