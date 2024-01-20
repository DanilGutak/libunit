/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strlen_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapenko <aapenko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 12:35:07 by aapenko           #+#    #+#             */
/*   Updated: 2024/01/20 12:48:24 by aapenko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int basic_test(void)
{
	if (ft_strlen("Hello") == 6)
		return (0);
	else
		return (-1);
}

int null_test(void)
{
	if (ft_strlen(""))
		return (0);
	else
		return (-1);
}

int big_test(void)
{
	if (ft_strlen("Hello, I know you, you are an idiot!") == 36)
		return (0);
	else
		return (-1);
}


int strlen_launcher(void)
{
	t_unit_test *testlist;

	load_test(&testlist, "Basic test", &basic_test);
	load_test(&testlist, "NULL test", &null_test);
	load_test(&testlist, "Big test", &big_test);
	return (launch_tests(&testlist));
}