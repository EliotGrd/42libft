/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 12:41:00 by egiraud           #+#    #+#             */
/*   Updated: 2025/04/25 12:56:35 by egiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_fd(char c, int fd)
{
	write(fd, &c, 1)
}

void	ft_putnbr_fd(int n, int fd)
{
	if(n == -2147483648)
	{
		write(fd, "-2147483648", 11)
	}
	if(nb < 0)
	{
		print_fd('-', fd);
		nb = -nb;
	}
	if(nb < 10)
	{
		print_fd(nb + '0', fd);
	}
	else
	{
		ft_putnbr(n / 10);
		print_fd(nb % 10 + '0', fd);
	}
}
