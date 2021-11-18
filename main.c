/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scass <scass@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 02:00:12 by scass             #+#    #+#             */
/*   Updated: 2021/05/08 09:03:17 by scass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

int main(void)
{
	char		dest[1024];
	char		*src;
	const char	*s1;
	const char	*s2;
	int			fd;
	char		*dups1;
	char		*dups2;
		
	//strlen:

	src = "My libasm project: a string to check if the function is working ";
	printf("My strlen %ld\n", ft_strlen(src));
	printf("Or strlen %ld\n", strlen(src));
	printf("My strlen: empty string %ld\n", ft_strlen(""));
	printf("Or strlen: empty string %ld\n", strlen(""));

	//strcpy:
	
	printf("My strcpy %s\n", ft_strcpy(dest, src));
	printf("Or strcpy %s\n", strcpy(dest, src));
	printf("My strcpy: empty src %s\n", ft_strcpy(dest, ""));
	printf("Or strcpy: empty src %s\n", strcpy(dest, ""));

	// strcmp

	s1 = "Some string to check";
	s2 = "Hello world!";

	printf("My strcmp %d\n", ft_strcmp(s1, s2));
	printf("Or strcmp %d\n", strcmp(s1, s2));
	printf("My strcmp empty first arg %d\n", ft_strcmp("", s1));
	printf("Or strcmp empty first arg %d\n", strcmp("", s1));
	printf("My strcmp empty second arg %d\n", ft_strcmp(s1, ""));
	printf("Or strcmp empty second arg %d\n", strcmp(s1, ""));
	printf("My strcmp %d\n", ft_strcmp(s1, s1));
	printf("Or strcmp %d\n", strcmp(s1, s1));
	printf("My strcmp empty string %d\n", ft_strcmp("", ""));
	printf("Or strcmp empty string %d\n", strcmp("", ""));

	// write
	
	printf(" My write %zd\n", ft_write(1, src, ft_strlen(src)));
	printf(" Or write %zd\n", write(1, src, ft_strlen(src)));
	printf("My write %zd errno = %d\n", ft_write(1, NULL, 1), errno);
	printf("Or write %zd errno = %d\n", write(1, NULL, 1), errno);
	errno = 0;
	
	// read

	fd = open("main.c", O_RDONLY);
	printf("My read %zd errno = %d\n", ft_read(fd, dest, 20), errno);
	printf("Or read %zd errno = %d\n", read(fd, dest, 20), errno);
	printf("My read %zd errno = %d\n", ft_read(51, dest, 20), errno);
	printf("Or read %zd errno = %d\n", read(51, dest, 20), errno);
	close(fd);
	errno = 0;
	
	// strdup
	
	dups1 = ft_strdup(src);
	dups2 = strdup(src);

	printf("My strdup %s\n", dups1);
	printf("Or strdup %s\n", dups2);

	free(dups1);
	free(dups2);
	
	dups1 = ft_strdup("");
	dups2 = strdup("");

	printf("My strdup: empty string %s\n", dups1);
	printf("Or strdup: empty string %s\n", dups2);

	free(dups1);
	free(dups2);
	
	return (0);
}