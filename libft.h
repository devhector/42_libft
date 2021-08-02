/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectfern <hectfern@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 15:32:03 by hectfern          #+#    #+#             */
/*   Updated: 2021/08/02 16:01:08 by hectfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
//# include <stdlib.h>
int		ft_isalnum(int	c);
int		ft_isalpha(int	c);
int		ft_isascii(int	c);
int		ft_isdigit(int	c);
int		ft_isprint(int	c);
int		ft_tolower(int	c);
int		ft_toupper(int	c);
int		ft_atof(const char	*str);
int		ft_strncmp(const char	*s1, const char	*s2, size_t	n);
int		ft_memcmp(const void	*s1, const void	*s2, size_t	n);

char	*ft_strdup(const char	*s);
char	*ft_strchr(const char	*s, int	c);
char	*ft_strnstr(const char	*s1, const char	*s2, size_t	len);

size_t	ft_strlen(const char	*s);

void	*ft_bzero(void	*s, size_t	n);
void	*ft_calloc(size_t	n, size_t	size);
void	*ft_memset(void	*s, int	c, size_t	n);
void	*ft_memmov(void	*s1, const void	*s2, size_t	n);
void	*ft_memcpy(void	*s1, const void	*s2, size_t	n);
void	*ft_memchr(const void	*s, int	c, size_t	n);

#endif 