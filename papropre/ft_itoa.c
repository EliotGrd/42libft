/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraud <egiraud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 20:02:08 by egiraud           #+#    #+#             */
/*   Updated: 2025/04/30 21:26:00 by egiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int	lencalc(int	n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return(count);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		count;
	int		i;
	char	*result;

	nb = n;
	count = lencalc(nb);
	result = malloc(sizeof(char) * (count + 1));
	if (!result)
		return (NULL);
	i = count;
	if (nb < 0)
	{
		nb = -nb;
		result[0] = '-';
	}
	if (n == 0)
		result[0] = '0';
	result[count] = 0;
	while (nb != 0)
	{
		result[--i] = ((nb % 10) + 48);
		nb /= 10;
	}
	return(result);
}

int main()
{
	printf("%s : 5\n", ft_itoa(5));
	printf("%s : -5\n", ft_itoa(-5));
	printf("%s : 0\n", ft_itoa(0));
	printf("%s : min\n", ft_itoa(INT_MIN));
	printf("%s : max\n", ft_itoa(INT_MAX));
}
