/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_execute.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutak <dgutak@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 14:51:54 by aapenko           #+#    #+#             */
/*   Updated: 2024/01/20 17:59:27 by dgutak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

static int	print_status(int status)
{
	if (status == OK)
		ft_putstr_fd("\033[32m[OK]\033[0m", 1);
	else if (status == KO)
		ft_putstr_fd("\033[31m[KO]\033[0m", 1);
	else if (status == SEGV)
		ft_putstr_fd("\033[31m[SEGV]\033[0m", 1);
	else if (status == BUSE)
		ft_putstr_fd("\033[31m[BUSE]\033[0m", 1);
	ft_putchar_fd('\n', 1);
	if (status == OK)
		return (1);
	else
		return (0);
}

static void	print_result(int success, int total)
{
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(success, 1);
	ft_putchar_fd('/', 1);
	ft_putnbr_fd(total, 1);
	ft_putstr_fd(" tests checked\n", 1);
}

static int	check_status(int status)
{
	if (WIFEXITED(status))
	{
		if (WEXITSTATUS(status) == 0)
			return (OK);
		else
			return (KO);
	}
	else if (WIFSIGNALED(status))
	{
		if (WTERMSIG(status) == SIGSEGV)
			return (SEGV);
		else if (WTERMSIG(status) == SIGBUS)
			return (BUSE);
	}
	return (KO);
}

int	launch_tests(t_unit_test *testlist, int success, int total)
{
	t_unit_test	*temp;
	int			pid;
	int			status;

	temp = testlist;
	while (temp && ++total)
	{
		pid = fork();
		if (pid == -1)
			return (free_testlist(testlist), FORK_FAILURE);
		if (pid == 0)
		{
			if (temp->func() == 0)
				return (free_testlist(testlist), exit(OK), 0);
			else
				return (free_testlist(testlist), exit(KO), 1);
			temp = temp->next;
		}
		wait(&status);
		success += print_status(check_status(status));
		temp = temp->next;
	}
	return (free_testlist(testlist), print_result(success, total), 0);
}
