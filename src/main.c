/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 12:05:34 by ahunt             #+#    #+#             */
/*   Updated: 2017/02/10 12:05:41 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

double ft_powww(double base, double exponent)
{
	if (exponent < 1)
		return (base);
	else
	{
		write(1, "else\n", 5);
		return (base * ft_powww(base, exponent - 1));
	}
}

int ftr_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

int ft_add(int a, int b)
{
	int c;

	write(1, "8", 1);
	
	return (a + b);
}

int	main(void)
{
	pid_t p1, p2, wp;
	int status;
	char *str;

	str = "Starting main\n";
	write(1, str, ft_strlen(str));
	if ((p1 = fork()) < 0)
	{
		str = "Failed to make first process\n";
		write(1, str, ftr_strlen(str));
	}
	else if (p1 == 0)
	{
		str = "First process started\n";
		write(1, str, ft_strlen(str));
		//ft_powww(5, 50);
		char *empty;
		ft_strlen(empty);
		exit(1);
	}
	if ((p2 = fork()) < 0)
	{
		str = "Failed to make first process\n";
		write(1, str, ft_strlen(str));
	}
	else if (p2 == 0)
	{
		str = "Second process started\n";
		write(1, str, ft_strlen(str));
		ft_add(3, 5);
		exit(1);
	}
	ft_putnbr(p1);
	ft_putnbr(p2);
	str = "Parent waiting for process 1 to end\n";
	write(1, str, ft_strlen(str));
	wp = wait(&status);
	if (WIFSIGNALED(status))
		printf("killed by signal %d\n", status);
	ft_putnbr(wp);\
	printf("Status%d\n",status);
	str = "Parent detects that process 1 is done\n";
	write(1, str, ft_strlen(str));
	str = "Parent waiting for process 2 to end\n";
	write(1, str, ft_strlen(str));
	wp = wait(&status);
	if (WIFSIGNALED(status))
		printf("killed by signal %d\n", status);
	ft_putnbr(wp);
	str = "Parent detects that process 2 is done\n";
	write(1, str, ft_strlen(str));
	ft_putnbr(SIGSEGV);//11
	ft_putendl("");//
	ft_putnbr(SIGBUS);//10
	exit(0);
}
