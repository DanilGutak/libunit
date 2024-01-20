/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutak <dgutak@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 16:04:30 by dgutak            #+#    #+#             */
/*   Updated: 2024/01/20 19:31:18 by dgutak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int	atoi_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	load_test(&testlist, "Atoi Test: basic test: ", &atoi_basic_test);
	load_test(&testlist, "Atoi Test: null test: ", &atoi_null_test);
	load_test(&testlist, "Atoi Test: long test: ", &atoi_long_test);
	load_test(&testlist, "Atoi Test: null char test: ",
		&atoi_null_char_test);
	load_test(&testlist, "Atoi Test: emoji test: ", &atoi_negative_test);
	return (launch_tests(testlist, 0, 0));
}
