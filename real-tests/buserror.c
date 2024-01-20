/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buserror.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutak <dgutak@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 14:44:36 by dgutak            #+#    #+#             */
/*   Updated: 2024/01/20 17:55:55 by dgutak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sample.h"

int	make_buserror(void)
{
	char	*p;
	int		i;

	asm("pushf\n\torl $0x40000,(%rsp)\n\tpopf");
	p = malloc(sizeof(int) + 1);
	p++;
	i = *(int *)p;
	(void)i;
	return (1);
}
