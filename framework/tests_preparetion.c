/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_preparetion.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutak <dgutak@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 12:41:12 by aapenko           #+#    #+#             */
/*   Updated: 2024/01/20 17:56:43 by dgutak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int	load_test(t_unit_test **testlist, char *name, int (*func)(void))
{
	t_unit_test	*new;
	t_unit_test	*temp;

	new = (t_unit_test *)malloc(sizeof(t_unit_test));
	if (!new)
		return (free_testlist(*testlist), exit(MALLOC_FAILURE), MALLOC_FAILURE);
	new->name = ft_strdup(name);
	if (!new->name)
		return (free(new), free_testlist(*testlist), exit(MALLOC_FAILURE),
			MALLOC_FAILURE);
	new->func = func;
	new->next = NULL;
	temp = *testlist;
	if (!temp)
	{
		*testlist = new;
		return (0);
	}
	while (temp && temp->next)
		temp = temp->next;
	temp->next = new;
	return (0);
}
