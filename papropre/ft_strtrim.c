/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraud <egiraud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 18:30:39 by egiraud           #+#    #+#             */
/*   Updated: 2025/04/30 19:40:19 by egiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

size_t  ft_strlen(const char *s);
char    *ft_strdup(const char *s);

static int	compare(char *charset, char c)
{
	while (*charset)
	{
		if (*charset == c)
			return (1);
		charset++;
	}
	return (0);
}

char	*ft_strtrim(char const *s, char const *set)
{
	char	*nstr;
	int		i;
	int		j;
	int		k;

	i = ft_strlen(s) - 1;
	j = 0;
	if (ft_strlen(s) == 0)
		return (ft_strdup(""));
	while (compare((char *)set,s[j]) == 1)
		j++;
	printf("%d\n",j);
	while (compare((char *)set,s[i]) == 1)
		i--;
	k = 0;
	printf("%d\n",i);
	nstr = malloc(sizeof(char) * (i - j + 1));
	if (!nstr)
		return ("malloc error");
	while (j <= i)
		nstr[k++] = s[j++];
	nstr[k] = 0;
	return (nstr);
}

int main()
{
	char const *s = ")_#!lrles chatbs dormentbj";
	char const *set = ")_#!lrbj";

	printf("%s\n",ft_strtrim(s,set));
}
