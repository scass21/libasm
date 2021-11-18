/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 01:56:20 by scass             #+#    #+#             */
/*   Updated: 2021/05/08 09:04:09 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

size_t			ft_strlen(const char *s);
char 			*ft_strcpy(char *dest, const char *src);
int 			ft_strcmp(const char *s1, const char *s2);
ssize_t 		ft_read(int fd, void *buf, size_t count);
ssize_t 		ft_write(int fd, const void *buf, size_t count);
char 			*ft_strdup(const char *s);

#endif