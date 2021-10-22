/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: klasak <klasak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/20 09:21:04 by klasak        #+#    #+#                 */
/*   Updated: 2021/09/21 10:32:35 by klasak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_count_n(int n)
{
	int	number;
	int	i;

	i = 0;
	number = n;
	while (number / 10 > 0)
	{
		i++;
		number = number / 10;
	}
	return (i);
}

static char	*ft_string_alloc(int n, int i)
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

static char	*ft_lowest_min(void)
{
	char	*str2;

	str2 = (char *)malloc(12);
	if (!str2)
		return (0);
	str2[0] = '-';
	str2[1] = '2';
	str2[2] = '1';
	str2[3] = '4';
	str2[4] = '7';
	str2[5] = '4';
	str2[6] = '8';
	str2[7] = '3';
	str2[8] = '6';
	str2[9] = '4';
	str2[10] = '8';
	str2[11] = '\0';
	return (str2);
}

static char	*ft_negative(int n)
{
	char	*str;
	char	*str2;
	int		i;
	int		c;

	c = 1;
	i = ft_count_n(-n);
	str = ft_string_alloc(-n, i);
	str2 = (char *)malloc(i + 3);
	if (!str2)
		return (0);
	str2[0] = '-';
	while (str[c - 1] != '\0')
	{
		str2[c] = str[c - 1];
		c++;
	}
	str2[c] = '\0';
	free(str);
	return (str2);
}

char	*ft_itoa(int n)
{
	char	*str2;
	int		i;

	i = 0;
	if (n == -2147483648)
	{
		str2 = ft_lowest_min();
	}
	else if (n < 0 && n != -2147483648)
	{
		str2 = ft_negative(n);
	}
	else
	{
		i = ft_count_n(n);
		str2 = ft_string_alloc(n, i);
	}
	return (str2);
}
