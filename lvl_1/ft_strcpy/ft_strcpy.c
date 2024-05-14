#include <stddef.h>

char    *ft_strcpy(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	if (!s1 && !s2)
			return (NULL);
	while (s2[j] != '\0')
		s1[i++] = s2[j++];
	s1[i] = '\0';
	return (s1);
}

