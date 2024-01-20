/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_execute.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapenko <aapenko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 14:51:54 by aapenko           #+#    #+#             */
/*   Updated: 2024/01/20 16:29:57 by aapenko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

static int	print_status(int status)
{
	if (status == OK)
		ft_putstr("\033[32m[OK]\033[0m");
	else if (status == KO)
		ft_putstr("\033[31m[KO]\033[0m");
	else if (status == SEGV)
		ft_putstr("\033[31m[SEGV]\033[0m");
	else if (status == BUSE)
		ft_putstr("\033[31m[BUSE]\033[0m");
	ft_putchar('\n');
	if (status == OK)
		return (1);
	else
		return (0);
}

static	void print_result(int success, int total)
{
	ft_putchar('\n');
	ft_putnbr(success);
	ft_putchar('/');
	ft_putnbr(total);
	ft_putstr(" tests checked\n");
}

static	int check_status(int status)
{
	if (WIFEXITED(status))
	{
		if (WEXITSTATUS(status) == 0)
			return OK;
		else
			return KO;
	}
	else if (WIFSIGNALED(status))
	{
		if (WTERMSIG(status) == SIGSEGV)
			return SEGV;
		else if (WTERMSIG(status) == SIGBUS)
			return BUSE;
	}
	return KO;
}

int	launch_tests(t_unit_test *testlist)
{
	int			pid;
	int			status;
	int			success;
	int			total;

	success = 0;
	total = 0;
	while (testlist)
	{
		pid = fork();
		if (pid == -1)
			return FORK_FAILURE;
		if (pid == 0)
		{
			if (testlist->func() == 0)
				exit(OK);
			else
				exit(KO);
			testlist = testlist->next;
		}
		wait(&status);
		success += print_status(check_status(status));
		total++;
	}
	return (print_result(success, total), 0);
}
