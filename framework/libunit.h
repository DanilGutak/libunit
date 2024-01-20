/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutak <dgutak@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 12:26:12 by aapenko           #+#    #+#             */
/*   Updated: 2024/01/20 18:00:16 by dgutak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include "../libft/libft.h"
# include <signal.h>
# include <stdlib.h>
# include <sys/wait.h>
# include <unistd.h>
# define OK 0
# define KO 1
# define SEGV 2
# define BUSE 3
# define MALLOC_FAILURE 1
# define FORK_FAILURE 2

typedef struct s_unit_test
{
	char				*name;
	int					(*func)(void);
	struct s_unit_test	*next;
}						t_unit_test;

int						load_test(t_unit_test **testlist, char *name,
							int (*func)(void));
int						launch_tests(t_unit_test *testlist, int success,
							int total);
void					free_testlist(t_unit_test *testlist);

#endif