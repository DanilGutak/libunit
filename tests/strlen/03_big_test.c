/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_big_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutak <dgutak@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 12:35:07 by aapenko           #+#    #+#             */
/*   Updated: 2024/01/20 14:54:05 by dgutak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int basic_test(void)
{
	if (ft_strlen("Hello, I know you, you are an idiot!") == 36)
		return (0);
	else
		return (-1);
}