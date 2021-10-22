/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ulbase.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: klasak   <klasak@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/12 11:57:36 by klasak        #+#    #+#                 */
/*   Updated: 2021/10/21 11:44:24 by klasak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_uldigits(unsigned long long nb)
{
	int	i;

	i = 0;
	while (nb >= 16 )
	{
		nb = nb / 16;
		i++;
	}
	return (i);
}

static char	ft_ulletters(unsigned long long nb, unsigned long long div)
{
	char	strr;
	int		ret;		

	ret = (nb / div) % 16;
	if (ret == 10)
		strr = 'a';
	else if (ret == 11)
		strr = 'b';
	else if (ret == 12)
		strr = 'c';
	else if (ret == 13)
		strr = 'd';
	else if (ret == 14)
		strr = 'e';
	else if (ret == 15)
		strr = 'f';
	else
		strr = ret + '0';
	return (strr);
}

static char	*ft_ulallocation(unsigned long long nb, int i)
{
	int					j;
	unsigned long long	div;
	char				*str;
	int					k;

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
			div = div * 16;
			j++;
		}
		str[k] = ft_ulletters(nb, div);
		i--;
		k++;
	}
	str[k] = '\0';
	return (str);
}

char	*ft_ulbase(unsigned long long nb)
{
	int		result;
	char	*string;

	result = ft_uldigits(nb);
	string = ft_ulallocation(nb, result);
	return (string);
}
