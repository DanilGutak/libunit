/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutak <dgutak@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 16:04:30 by dgutak            #+#    #+#             */
/*   Updated: 2024/01/20 17:59:43 by dgutak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../sample.h"

int	sample_test_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	load_test(&testlist, "Sample Test: OK test: ", &test_ok);
	load_test(&testlist, "Sample Test: KO test: ", &test_ko);
	load_test(&testlist, "Sample Test: SEG test: ", &test_seg);
	load_test(&testlist, "Sample Test: BUS test: ", &test_bus);
	return (launch_tests(testlist, 0, 0));
}
