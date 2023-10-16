/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: carlowesseling <carlowesseling@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/06 09:51:30 by carlowessel   #+#    #+#                 */
/*   Updated: 2023/09/07 10:45:55 by carlowessel   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int	replace(char *fileName, char *find, char *replaceWith) {
	
	std::string::size_type 	pos = 			0;
	std::string				buffer;
	std::string 			newFileName = 	std::string(fileName) + ".replace";
	std::string 			s1 = 			std::string(find);
	std::string 			s2 = 			std::string(replaceWith);

	std::ifstream inputFile(fileName);
	if (!inputFile) {
		std::cout << "error opening input file" << std::endl;
		return (1);
	}
	
	std::ofstream outputFile(newFileName.c_str());
	if (!outputFile) {
		std::cout << "error opening output file" << std::endl;
		return (2);
	}

	while (std::getline (inputFile, buffer)) {
		while ((pos = buffer.find(s1)) != std::string::npos) {
			buffer.erase (pos, s1.length());
			buffer.insert (pos, s2);
		}
		outputFile << '\n' << buffer;
	}

	//closing not required but good practise
	inputFile.close(); 
	outputFile.close();
	return(0);
}

int	main(int argc, char **argv) {
	
	int	ret;

	if (argc != 4) {
		std::cout << "invalid parameter count" << std::endl;
		return (0); 
	}
	
	ret = replace(argv[1], argv[2], argv[3]);
	
	return (ret);
}
