/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 19:44:07 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/23 20:31:08 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>

class Harl
{
	private:
		int		_filterLevel;
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
	public:
		Harl(std::string filter);
		void	complain(void);
};

#endif
