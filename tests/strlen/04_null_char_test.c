/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_null_char_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutak <dgutak@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 14:44:36 by dgutak            #+#    #+#             */
/*   Updated: 2024/01/20 19:01:32 by dgutak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int	strlen_null_char_test(void)
{
	if (ft_strlen("Embedded\0Null") == 8)
		return (0);
	else
		return (-1);
}
