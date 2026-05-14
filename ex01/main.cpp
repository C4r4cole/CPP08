/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 14:32:59 by fmoulin           #+#    #+#             */
/*   Updated: 2026/05/07 17:48:14 by fmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	try
	{
		srand(time(NULL));

		std::vector<int>	values(10000);
		Span	sp(20500);
		
		// ===================== 10 000 values ========================
		std::cout << "---------- 10 000 values ----------" << std::endl;
		for (std::vector<int>::iterator it = values.begin(); it != values.end(); ++it)
			*it = rand() % 10000;

		sp.addRange(values.begin(), values.end());

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		// ===================== 20 000 values ========================
		std::cout << "---------- 20 000 values ----------" << std::endl;
		for (std::vector<int>::iterator it = values.begin(); it != values.end(); ++it)
			*it = rand() % 20000;
		sp.addRange(values.begin(), values.end());

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		// ===================== 30 000 values ========================
		std::cout << "---------- 30 000 values ----------" << std::endl;
		for (std::vector<int>::iterator it = values.begin(); it != values.end(); ++it)
			*it = rand() % 30000;
		sp.addRange(values.begin(), values.end());

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}

// int main()
// {
// 	Span sp = Span(5);
// 	sp.addNumber(6);
// 	sp.addNumber(3);
// 	sp.addNumber(17);
// 	sp.addNumber(9);
// 	sp.addNumber(11);
// 	std::cout << sp.shortestSpan() << std::endl;
// 	std::cout << sp.longestSpan() << std::endl;
// 	return 0;
// }