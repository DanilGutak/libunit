/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutak <dgutak@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 16:04:30 by dgutak            #+#    #+#             */
/*   Updated: 2024/01/21 13:39:36 by dgutak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int	strcmp_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	load_test(&testlist, "Strcmp equal test: ", &strcmp_equal_test);
	load_test(&testlist, "Strcmp diff len test: ", &strcmp_diff_len_test);
	load_test(&testlist, "Strcmp diff len rev test: ",
		&strcmp_diff_len_rev_test);
	load_test(&testlist, "Strcmp case test: ", &strcmp_case_test);
	load_test(&testlist, "Strcmp null char test: ",
		&strcmp_null_char_test);
	return (launch_tests(testlist, 0, 0));
}
