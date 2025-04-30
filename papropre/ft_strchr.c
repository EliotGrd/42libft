/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraud <egiraud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 08:13:59 by egiraud           #+#    #+#             */
/*   Updated: 2025/04/26 13:29:22 by egiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if(s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (0);
}

int main()
{
	//const char *s = "tripouille";

	/*char *address = ft_strchr(s,'x');
	if(address == 0)
		printf("la mienne > NULL\n");
	else
		printf("%s\n", address);
	
	char *address2 = strchr(s,'x');
	if(address2 == 0)
		printf("stringh > NULL\n");*/


	//printf("dans la string %p\n", &s[9]);
	//printf("dans le resultat %p\n", adress);

	printf("%s\n", strchr("teste", 'd' + 1));
	printf("%s\n", ft_strchr("teste", 'd' + 1));
}

