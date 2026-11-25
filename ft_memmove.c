/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paperella <paperella@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/25 12:28:10 by paperella         #+#    #+#             */
/*   Updated: 2026/11/25 17:17:44 by paperella        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *temp_dest;
	unsigned char *temp_src;
	size_t	i;

	temp_dest = (unsigned char *)dest;
	temp_src = (unsigned char *)src;
	i = 0;
	
	if (temp_dest > temp_src)
	{
		while (n-- > 0)
			temp_dest[n] = temp_src[n];		
	}
	else
	{
		while (i++ < n)
			temp_dest[i] = temp_dest[i];
	}
	return(dest);
}
/*
int	main(void)
{
	char buf[] = "thisshit";
	ft_memmove(buf + 4, buf, 4);
	printf("%s\n", buf);
}*/