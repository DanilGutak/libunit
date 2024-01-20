/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_long_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutak <dgutak@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 14:44:36 by dgutak            #+#    #+#             */
/*   Updated: 2024/01/20 19:02:11 by dgutak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int	strlen_long_test(void)
{
	if (ft_strlen("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa") == 30)
		return (0);
	else
		return (-1);
}
