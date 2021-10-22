/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_capitalize_hex.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: klasak   <klasak@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/12 11:57:36 by klasak        #+#    #+#                 */
/*   Updated: 2021/09/17 10:03:54 by klasak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

char	*ft_strcapitalize_hex(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] >= 97 && str[c] <= 102)
			str[c] = str[c] - 32;
		c++;
	}
	return (str);
}
