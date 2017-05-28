/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Entities.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/27 16:58:53 by shulley           #+#    #+#             */
/*   Updated: 2017/05/27 16:58:57 by shulley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENTITIES_CLASS_HPP
# define ENTITIES_CLASS_HPP

#include "Vector.hpp"
#include <iostream>
#include <string>

class	Entities {

	protected:
		const char		*avatar;
		Vector			pos;

	public:
		Entities( void );
       		Entities( Entities const & );
		Entities(Vector);
        //	Entities& operator=( Entities const & );
       		~Entities( void );

		virtual const char	*getAvatar();
		virtual void		setAvatar(const char *);
		virtual	int		getX();
		virtual	int		getY();
		virtual	void		moveUp();
		virtual void		moveDown();
		virtual	void		moveLeft();
		virtual void		moveRight();
		virtual	void	setX(int);
		virtual	void	setY(int);
};

#endif
