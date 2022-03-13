/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smhah <smhah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 14:13:49 by smhah             #+#    #+#             */
/*   Updated: 2021/12/10 15:50:41 by smhah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


class contact{

	private:
		int 			id;
		std::string		first_name;
		std::string		last_name;
		std::string 	nickname;
		std::string		phone_number;
		std::string		darkest_secret;
	public :
		std::string		get_first_name();
		std::string 	get_last_name();
		std::string		get_nickname();
		std::string     get_phone_number();
		std::string     get_darkest_secret();
		int				get_id();
		void			set_first_name(std::string str);
		void			set_last_name(std::string  str);
		void			set_nickname(std::string str);
		void			set_phone_number(std::string str);
		void			set_darkest_secret(std::string str);
		void			set_id(int id);
};

class phonebook{
	private:
		contact contacts[8];
	public:
		phonebook(void);
		~phonebook(void);
		void		add_function(int *i, int *nb_contacts, int *add_rank, std::string buffer, int *state);
		void		set_contacts(int add_rank, std::string buffer, int i);
		void		print_contacts(int end);
		void		print_enter(int add_rank);
		void		print_contact_info(int index);
		int			search_function(int *state, int nb_contacts);
		std::string	check_width_of_string(std::string str);
};