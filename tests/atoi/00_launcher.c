/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutak <dgutak@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 16:04:30 by dgutak            #+#    #+#             */
/*   Updated: 2024/01/21 13:39:46 by dgutak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int	atoi_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	load_test(&testlist, "Atoi: basic test: ", &atoi_basic_test);
	load_test(&testlist, "Atoi: null test: ", &atoi_null_test);
	load_test(&testlist, "Atoi: long test: ", &atoi_long_test);
	load_test(&testlist, "Atoi: null char test: ",
		&atoi_null_char_test);
	load_test(&testlist, "Atoi: emoji test: ", &atoi_negative_test);
	return (launch_tests(testlist, 0, 0));
}
