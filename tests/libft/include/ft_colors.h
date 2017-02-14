/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_colors.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 17:24:08 by ahunt             #+#    #+#             */
/*   Updated: 2016/11/06 17:24:13 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_COLORS_H
# define FT_COLORS_H

# include "libftprintf.h"

# define RESET		"\033[0m"
# define DIM		2
# define BLINK		5
# define REVERSE	7 "\033[o;s;dm"
# define HIDDEN		8

# define BD_BLACK	"\033[1;30m"
# define BD_RED		"\033[1;31m"
# define BD_GREEN	"\033[1;32m"
# define BD_YELLOW	"\033[1;33m"
# define BD_BLUE	"\033[1;34m"
# define BD_MAGENTA	"\033[1;35m"
# define BD_CYAN	"\033[1;36m"
# define BD_WHITE	"\033[1;37m"

# define IT_BLACK	"\033[3;30m"
# define IT_RED		"\033[3;31m"
# define IT_GREEN	"\033[3;32m"
# define IT_YELLOW	"\033[3;33m"
# define IT_BLUE	"\033[3;34m"
# define IT_MAGNETA	"\033[3;35m"
# define IT_CYAN	"\033[3;36m"
# define IT_WHITE	"\033[3;37m"

# define UN_BLACK	"\033[4;30m"
# define UN_RED		"\033[4;31m"
# define UN_GREEN	"\033[4;32m"
# define UN_YELLOW	"\033[4;33m"
# define UN_BLUE	"\033[4;34m"
# define UN_MAGENTA	"\033[4;35m"
# define UN_CYAN	"\033[4;36m"
# define UN_WHITE	"\033[4;37m"

# define BLACK 		"\033[30m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define BLUE		"\033[34m"
# define MAGENTA	"\033[35m"
# define CYAN		"\033[36m"
# define WHITE		"\033[37m"

# define BG_BLACK 	"\033[40m"
# define BG_BRED	"\033[41m"
# define BG_GREEN	"\033[42m"
# define BG_YELLOW	"\033[43m"
# define BG_BLUE	"\033[44m"
# define BG_MAGENTA	"\033[45m"
# define BG_CYAN	"\033[46m"
# define BG_WHITE	"\033[47m"

#endif
