/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ubase.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: klasak   <klasak@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/12 11:57:36 by klasak        #+#    #+#                 */
/*   Updated: 2021/10/21 11:42:10 by klasak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_udigits(unsigned int nb)
{
	int	i;

	i = 0;
	while (nb >= 16)
	{
		nb = nb / 16;
		i++;
	}
	return (i);
}

static char	ft_uletters(unsigned int nb, int div)
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

static char	*ft_uallocation(unsigned int nb, int i)
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
			div = div * 16;
			j++;
		}
		str[k] = ft_uletters(nb, div);
		i--;
		k++;
	}
	str[k] = '\0';
	return (str);
}

char	*ft_ubase(unsigned int nb)
{
	int		result;
	char	*string;

	result = ft_udigits(nb);
	string = ft_uallocation(nb, result);
	return (string);
}
