/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: klasak   <klasak@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/12 11:57:36 by klasak        #+#    #+#                 */
/*   Updated: 2021/10/18 15:12:43 by klasak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_format(int i, int j, const char *format, va_list ap)
{
	if (format[i] == '%' && format[i + 1] == '%')
	{
		ft_putchar_fd('%');
		i = i + 2;
		j++;
	}
	else
	{
		i++;
		j = ft_switch(i, j, format, ap);
		i++;
	}
	return (j);
}

int	print_characters(const char *format, va_list ap)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			ft_putchar_fd(format[i]);
			i++;
			j++;
		}
		else
		{
			j = print_format(i, j, format, ap);
			i = i + 2;
		}
	}
	return (j);
}

int	ft_printf(const char *format, ...)
{
	int		j;
	va_list	ap;

	j = 0;
	va_start(ap, format);
	j = print_characters(format, ap);
	va_end(ap);
	return (j);
}
