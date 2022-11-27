/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cwesseli <cwesseli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 09:28:59 by cwesseli      #+#    #+#                 */
/*   Updated: 2022/11/01 13:29:54 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>

typedef struct s_print
{
	va_list				args;
	unsigned long int	len;
	char				*valid_char;
	char				*length;
	char				*base_h;
	char				*base_h_up;
	char				*base_d;
}	t_print;

int		ft_printf(const char *str, ...);
void	ft_print_char(t_print *list);
void	ft_print_str(t_print *list);
void	ft_print_dec(t_print *list, char c);
void	ft_print_str_dec(t_print *list, char *str);
void	ft_print_hex(t_print *list, char c);
void	ft_printf_itoa(t_print *list, long int n, char *base);
void	ft_printf_itoa_u(t_print *list, unsigned long long int n, char *base);
int		check_ident(t_print *list, char c);
void	check_letter(t_print *list, char c);
int		check_input(t_print *list, char *str);

#endif
