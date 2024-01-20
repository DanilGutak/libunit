/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutak <dgutak@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 12:45:21 by aapenko           #+#    #+#             */
/*   Updated: 2024/01/20 18:01:41 by dgutak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	free_testlist(t_unit_test *testlist)
{
	t_unit_test	*tmp;

	while (testlist)
	{
		tmp = testlist;
		free(testlist->name);
		testlist = testlist->next;
		free(tmp);
	}
}
