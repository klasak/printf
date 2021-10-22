/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: klasak   <klasak@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/12 11:57:36 by klasak        #+#    #+#                 */
/*   Updated: 2021/10/21 11:36:13 by klasak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>

int		ft_printf(const char *format, ...);
int		ft_switch(int i, int j, const char *format, va_list ap);
void	ft_putchar_fd(char c);
void	ft_putstr_fd(char *s);
size_t	ft_strlen(const char *s);
char	*ft_itoa(int n);
char	*ft_utoa(unsigned int n);
char	*ft_ubase(unsigned int nb);
char	*ft_ulbase(unsigned long nb);
char	*ft_strcapitalize_hex(char *str);
int		ft_c(int j, va_list ap);
int		ft_s(int j, va_list ap);
int		ft_p(int j, va_list ap);

#endif
