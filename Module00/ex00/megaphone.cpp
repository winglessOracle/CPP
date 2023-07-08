/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: wingessoracle <wingessoracle@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/21 09:20:06 by wingessorac   #+#    #+#                 */
/*   Updated: 2023/07/08 13:00:41 by carlowessel   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

class Megaphone {
	
	public:
		void setMessage(int argc, char **str) {
			message = "";
			int	i = 1;
			while (i < argc) {
				message += str[i];
				if (str[i + 1])
					message += " ";
				i++;
			}
			toUpper();
		}
		
		void printMessage() {
		if (message.empty())
				std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		else
			std::cout << message << std::endl;
		}

	private:
		std::string message;

		void toUpper() {
			int	i = 0;
			while (message[i]) {
				message[i] = std::toupper(message[i]);
				i++;
			}
		}
};


int main(int argc, char **argv) {
	Megaphone megaphone;
	megaphone.setMessage(argc, argv);
	megaphone.printMessage();
	return (0);
}
