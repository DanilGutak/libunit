/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapenko <aapenko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 12:45:21 by aapenko           #+#    #+#             */
/*   Updated: 2024/01/20 12:47:18 by aapenko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void free_testlist(t_unit_test *testlist)
{
	t_unit_test *tmp;

	while (testlist)
	{
		tmp = testlist;
		free(testlist->name);
		testlist = testlist->next;
		free(tmp);
	}
}