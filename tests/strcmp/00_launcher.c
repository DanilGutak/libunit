/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutak <dgutak@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 16:04:30 by dgutak            #+#    #+#             */
/*   Updated: 2024/01/20 19:34:20 by dgutak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int	strcmp_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	load_test(&testlist, "Strcmp Test: equal test: ", &strcmp_equal_test);
	load_test(&testlist, "Strcmp Test: diff len test: ", &strcmp_diff_len_test);
	load_test(&testlist, "Strcmp Test: diff len rev test: ",
		&strcmp_diff_len_rev_test);
	load_test(&testlist, "Strcmp Test: case test: ", &strcmp_case_test);
	load_test(&testlist, "Strcmp Test: null char test: ",
		&strcmp_null_char_test);
	return (launch_tests(testlist, 0, 0));
}
