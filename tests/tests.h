/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutak <dgutak@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 16:14:24 by dgutak            #+#    #+#             */
/*   Updated: 2024/01/20 19:29:14 by dgutak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H

# include "../framework/libunit.h"

int	strlen_launcher(void);
int	strcmp_launcher(void);
int	atoi_launcher(void);

int	strlen_basic_test(void);
int	strlen_null_test(void);
int	strlen_null_char_test(void);
int	strlen_emoji_test(void);
int	strlen_long_test(void);

int	atoi_basic_test(void);
int	atoi_null_test(void);
int	atoi_null_char_test(void);
int	atoi_negative_test(void);
int	atoi_long_test(void);

int	strcmp_equal_test(void);
int	strcmp_diff_len_test(void);
int	strcmp_diff_len_rev_test(void);
int	strcmp_case_test(void);
int	strcmp_null_char_test(void);

#endif