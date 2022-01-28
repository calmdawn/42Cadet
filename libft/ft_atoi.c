/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucho <jucho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 23:52:38 by jucho             #+#    #+#             */
/*   Updated: 2022/01/22 23:52:38 by jucho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	check_space(const char *str, int *idx)
{
	while (str[*idx] == '\t' || str[*idx] == '\n'
		|| str[*idx] == '\v' || str[*idx] == '\f'
		|| str[*idx] == '\r' || str[*idx] == ' ')
	{
		(*idx)++;
	}
}

void	check_oper(const char *str, int *idx, int *neg_cnt)
{
	if (str[*idx] == '-' || str[*idx] == '+')
	{
		if (str[*idx] == '-')
			*neg_cnt = *neg_cnt * -1;
		(*idx)++;
	}
}

int	ft_atoi(const char *str)
{
	int			idx;
	int			neg_cnt;
	long long	result;

	idx = 0;
	neg_cnt = 1;
	result = 0;
	check_space(str, &idx);
	check_oper(str, &idx, &neg_cnt);
	while ('0' <= str[idx] && str[idx] <= '9')
	{
		result = (result * 10) + (str[idx] - '0');
		if (result * neg_cnt > 2147483647)
			return (-1);
		else if (result * neg_cnt < -2147483648)
			return (0);
		idx++;
	}
	result = result * neg_cnt;
	return (result);
}
