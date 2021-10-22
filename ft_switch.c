/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_switch.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: klasak   <klasak@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/12 11:57:36 by klasak        #+#    #+#                 */
/*   Updated: 2021/10/21 11:53:42 by klasak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

int	ft_i(int j, va_list ap)
{
	char	*string;
	int		integer;

	integer = va_arg(ap, int);
	string = ft_itoa(integer);
	ft_putstr_fd(string);
	j += ft_strlen(string);
	free(string);
	return (j);
}

int	ft_u(int j, va_list ap)
{
	char			*string;
	unsigned int	uinteger;

	uinteger = va_arg(ap, unsigned int);
	string = ft_utoa(uinteger);
	ft_putstr_fd(string);
	j += ft_strlen(string);
	free(string);
	return (j);
}

int	ft_x(int j, va_list ap)
{
	char			*string;
	unsigned int	uinteger;

	uinteger = va_arg(ap, unsigned int);
	string = ft_ubase(uinteger);
	ft_putstr_fd(string);
	j += ft_strlen(string);
	free(string);
	return (j);
}

int	ft_capx(int j, va_list ap)
{
	char			*string;
	unsigned int	uinteger;

	uinteger = va_arg(ap, unsigned int);
	string = ft_ubase(uinteger);
	string = ft_strcapitalize_hex(string);
	ft_putstr_fd(string);
	j += ft_strlen(string);
	free(string);
	return (j);
}

int	ft_switch(int i, int j, const char *format, va_list ap)
{
	if (format[i] == 'c')
		j = ft_c(j, ap);
	else if (format[i] == 's')
		j = ft_s(j, ap);
	else if (format[i] == 'p')
		j = ft_p(j, ap);
	else if (format[i] == 'd' || format[i] == 'i')
		j = ft_i(j, ap);
	else if (format[i] == 'u')
		j = ft_u(j, ap);
	else if (format[i] == 'x')
		j = ft_x(j, ap);
	else if (format[i] == 'X')
		j = ft_capx(j, ap);
	return (j);
}
