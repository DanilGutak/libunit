/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_preparetion.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapenko <aapenko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 12:41:12 by aapenko           #+#    #+#             */
/*   Updated: 2024/01/20 16:39:29 by aapenko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int			load_test(t_unit_test *testlist, char *name, int (*func)(void))
{
	t_unit_test	*new;

	new = (t_unit_test *)malloc(sizeof(t_unit_test));
	if (!new)
		return (MALLOC_FAILURE);
	new->name = ft_strdup(name);
	if (!new->name)
		return (MALLOC_FAILURE);
	new->func = func;
	new->next = NULL;
	while (testlist->next)
		testlist = testlist->next;
	testlist->next = new;
	return (0);
}