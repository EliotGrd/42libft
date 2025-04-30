/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraud <egiraud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 13:42:20 by egiraud           #+#    #+#             */
/*   Updated: 2025/04/30 17:59:56 by egiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
char    *ft_strdup(const char *s)
{
    int i;
    char *nstr;

    i = 0;
    while (s[i])
        i++;
    nstr = malloc(sizeof(char) * (i + 1));
    if (!nstr)
        return (0);
    i = 0;
    while (s[i])
    {
        nstr[i] = s[i];
        i++;
    }
    nstr[i] = '\0';
    return ((char *)nstr);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*nstr;

	i = 0;
	if (!s)
		return (0);
	nstr = ft_strdup(s);
	if (!nstr)
		return (0);
	while (s[i])
	{
		nstr[i] = f(i,s[i]);
		i++;
	}
	nstr[i] = '\0';
	return (nstr);
}

char	f(unsigned int j, char c)
{
	(void)j;
	c += 1;
	return (c);
}

#include <stdio.h>
int main()
{
	char *str = "";
	//char (*f)(unsigned int, char) = f;
	printf("%s\n", ft_strmapi(str,f));
}
