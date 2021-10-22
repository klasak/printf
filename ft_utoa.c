/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_utoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: klasak <klasak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/20 09:21:04 by klasak        #+#    #+#                 */
/*   Updated: 2021/10/18 15:18:07 by klasak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_ucount_n(unsigned int n)
{
	unsigned int	number;
	int				i;

	i = 0;
	number = n;
	while (number / 10 > 0)
	{
		i++;
		number = number / 10;
	}
	return (i);
}

static char	*ft_ustring_alloc(unsigned int n, int i)
{
	int		j;
	int		div;
	char	*str;
	int		k;

	str = (char *)malloc(i + 2);
	if (!str)
		return (0);
	k = 0;
	while (i >= 0)
	{
		j = 1;
		div = 1;
		while (j <= i)
		{
			div = div * 10;
			j++;
		}
		str[k] = ((n / div) % 10 + '0');
		i--;
		k++;
	}
	str[k] = '\0';
	return (str);
}

char	*ft_utoa(unsigned int n)
{
	char	*str2;
	int		i;

	i = ft_ucount_n(n);
	str2 = ft_ustring_alloc(n, i);
	return (str2);
}
