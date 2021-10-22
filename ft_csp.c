/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_csp.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: klasak   <klasak@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/12 11:57:36 by klasak        #+#    #+#                 */
/*   Updated: 2021/10/21 11:36:58 by klasak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>
#include <unistd.h>

int	ft_c(int j, va_list ap)
{
	char	c;

	c = (char)va_arg(ap, int);
	ft_putchar_fd(c);
	j++;
	return (j);
}

int	ft_s(int j, va_list ap)
{
	char	*string;

	string = va_arg(ap, char *);
	if (string == NULL)
		string = "(null)";
	ft_putstr_fd(string);
	j += ft_strlen(string);
	return (j);
}

int	ft_p(int j, va_list ap)
{
	char				*string;
	unsigned long long	address;

	address = (unsigned long long )va_arg(ap, void *);
	string = ft_ulbase(address);
	write(1, "0x", 2);
	ft_putstr_fd(string);
	j += ft_strlen(string) + 2;
	free(string);
	return (j);
}
