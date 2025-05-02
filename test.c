#include "libft.h"
#include <stdio.h>

/*int main ()
{
	char *str;
	char *s;
	str = ft_strdup("0123456789");
	s = ft_substr(str, 9, 10);
	printf("%s", s);
	free(s);
	free(str);
}*/

int main ()
{
	char *s = "zlolzzzzz";
	char **arr = ft_split(s,'z');
	printf("%s\n",arr[0]);
	printf("%s\n",arr[1]);
	printf("%s\n",arr[2]);
}
