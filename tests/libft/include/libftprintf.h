/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/20 09:22:06 by ahunt             #+#    #+#             */
/*   Updated: 2016/10/25 04:53:36 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include "libft.h"
# include "ft_colors.h"
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <wchar.h>
# define LEN_MOD_H	1
# define LEN_MOD_HH	2
# define LEN_MOD_L	3
# define LEN_MOD_LL	4
# define LEN_MOD_J	5
# define LEN_MOD_Z	6
# define NULL_STR	"(null)"
# define MAX(a,b) (((a)>(b))?(a):(b))

typedef struct		s_fmt
{
	unsigned int	hash : 1;
	unsigned int	has_percision : 1;
	unsigned int	left_just : 1;
	unsigned int	pos_val : 1;
	unsigned int	prepend_sp : 1;
	unsigned int	prepend_zeros : 1;
	int				width;
	int				min_width;
	int				length;
	unsigned int	is_upper : 1;
}					t_fmt;

typedef size_t	(*t_conv_spec)(va_list*, t_fmt**);

t_conv_spec			ft_get_conv_spec(int i);
size_t				ft_printf(const char *format, ...);
t_fmt				*new_format(void);
size_t				ft_put_conv_spec(va_list *ap, t_fmt **args, char **fmt);
size_t				parse_format(va_list *ap, const char *fmt);
size_t				parse_args(va_list *ap, t_fmt **args, char **fmt);
int					parse_conv_spec(t_fmt **args, char **fmt);
void				parse_flags(t_fmt **args, char **fmt);
void				parse_num(t_fmt **args, char **fmt, int is_width);
void				parse_length(t_fmt **args, char **fmt);
char				*ft_get_justified_pad(unsigned int zeros, unsigned int percision,
						unsigned int l_just, int ptr);
size_t				ft_strpad(size_t width, char **nstr, char *pad,
						int left_just);
size_t				ft_putcharpad(size_t width, size_t size, char ch);
void				ft_prepend_prefix(char **nstr, char *prefix,
						int base, uintmax_t nbr);
size_t				ft_printf_int(va_list *ap, t_fmt **args);
size_t				ft_printf_mod(va_list *ap, t_fmt **args);
size_t				ft_printf_uint(va_list *ap, t_fmt **args);
size_t				ft_printf_hex(va_list *ap, t_fmt **args);
size_t				ft_unassigned_percision(t_fmt **args, int base);
size_t				ft_printf_mod(va_list *ap, t_fmt **args);
size_t				ft_printf_oct(va_list *ap, t_fmt **args);
size_t				ft_printf_char(va_list *ap, t_fmt **args);
size_t				ft_printf_wchar(va_list *ap, t_fmt **args);
size_t				ft_printf_string(va_list *ap, t_fmt **args);
size_t				ft_printf_wstring(va_list *ap, t_fmt **args);
size_t				ft_put_wstr(t_fmt **args, wchar_t *src, int chcnt,
						size_t size);
size_t				ft_printf_ptr(va_list *ap, t_fmt **args);
size_t				ft_printf_binary(va_list *ap, t_fmt **args);
size_t				ft_print_conv(va_list *ap, t_fmt **args, char **fmt);
void				ft_justify(t_fmt **args, char **nstr, size_t offset);
size_t				ft_putuint(t_fmt **args, char *prefix, uintmax_t nbr,
						int base);
unsigned char		*ft_get_wc(wchar_t c);
size_t				ft_get_bytes_wc(wchar_t c);
intmax_t			ft_get_int_length(va_list *ap, t_fmt **args);
uintmax_t			ft_get_uint_length(va_list *ap, t_fmt **args);
char				*ft_itoa_base(uintmax_t value, int base, int is_uppper);
uintmax_t			ft_pow(int base, int i);

#endif
