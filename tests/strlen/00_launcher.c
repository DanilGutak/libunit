/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutak <dgutak@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 16:04:30 by dgutak            #+#    #+#             */
/*   Updated: 2024/01/21 13:39:25 by dgutak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int	strlen_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	load_test(&testlist, "Strlen: basic test: ", &strlen_basic_test);
	load_test(&testlist, "Strlen: null test: ", &strlen_null_test);
	load_test(&testlist, "Strlen: long test: ", &strlen_long_test);
	load_test(&testlist, "Strlen: null char test: ",
		&strlen_null_char_test);
	load_test(&testlist, "Strlen: emoji test: ", &strlen_emoji_test);
	return (launch_tests(testlist, 0, 0));
}
