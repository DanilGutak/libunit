/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sample.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutak <dgutak@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 16:14:24 by dgutak            #+#    #+#             */
/*   Updated: 2024/01/20 17:55:05 by dgutak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_H
# define SAMPLE_H

# include "../framework/libunit.h"

int	sample_test_launcher(void);
int	test_ok(void);
int	test_ko(void);
int	test_seg(void);
int	test_bus(void);

int	make_buserror(void);
int	make_segfault(void);

int	sample_test_launcher(void);
#endif