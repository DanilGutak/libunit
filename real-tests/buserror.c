/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buserror.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutak <dgutak@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 14:44:36 by dgutak            #+#    #+#             */
/*   Updated: 2024/01/20 15:24:47 by dgutak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libunit.h"
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h>
size_t	ft_strlen(const char *s)
{
	size_t	length;

	if (!s)
		return (0);
	length = 0;
	while (s[length])
		length++;
	return (length);
}
void	ft_strcat(char *dest, const char *src)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(dest);
	while (src && src[i])
		dest[j++] = src[i++];
	dest[j] = '\0';
}

int			always_buse(void)
{
	char a[7] = "Hello";
	char b[6] = "World";

	ft_strcat(a, b);
	return (0);
}

	int main() {
    pid_t child_pid = fork();

    if (child_pid == 0) {
       always_buse();
    } else if (child_pid > 0) {
        // Parent process
        int status;
        waitpid(child_pid, &status, 0);

        if (WIFSIGNALED(status)) {
            int signal_number = WTERMSIG(status);
            printf("Child process exited with signal: %d\n", signal_number);
        } else {
            printf("Child process exited normally\n");
        }
    } else {
        perror("fork failed");
        return 1;
    }

    return 0;
}