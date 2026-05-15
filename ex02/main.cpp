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

#include "MutantStack.hpp"

int main(void)
{
	// --------------- MUTANT STACK <INT> -----------------
	
	MutantStack<int>			intStack;
	
	intStack.push(12);
	intStack.push(42);
	
	MutantStack<int>::iterator			itInt;
	itInt = intStack.end();
	itInt--;
	
	std::cout << "MUTANT STACK <INT>" << std::endl;
	std::cout << *intStack.begin() << std::endl;
	std::cout << *itInt << std::endl;
	std::cout << std::endl;

	
	// ------------- MUTANT STACK <STD::STRING> --------------
	
	MutantStack<std::string>	stringStack;

	stringStack.push("hello");
	stringStack.push(", ");
	stringStack.push("world");
	stringStack.push("!");

	MutantStack<std::string>::iterator	itString;
	itString = stringStack.end();
	itString--;

	std::cout << "MUTANT STACK <STD::STRING>" << std::endl;
	std::cout << *stringStack.begin() << std::endl;
	std::cout << *itString << std::endl;
	std::cout << std::endl;


	// --------------- STD::VECTOR <INT> -----------------

	std::vector<int>			intVector;

	intVector.push_back(75);
	intVector.push_back(10);
	intVector.push_back(54);
	intVector.push_back(37);
	
	std::vector<int>::iterator			itVector;
	itVector = intVector.end();
	itVector--;

	std::cout << "MUTANT STACK <STD::STRING>" << std::endl;
	std::cout << *intVector.begin() << std::endl;
	std::cout << *itVector << std::endl;
	std::cout << std::endl;


	return 0;
}

// int main()
// {
// 	MutantStack<int> mstack;

// 	mstack.push(5);
// 	mstack.push(17);

// 	std::cout << mstack.top() << std::endl;

// 	mstack.pop();
	
// 	std::cout << mstack.size() << std::endl;
	
// 	mstack.push(3);
// 	mstack.push(5);
// 	mstack.push(737);
// 	//[...]
// 	mstack.push(0);
	
// 	MutantStack<int>::iterator it = mstack.begin();
// 	MutantStack<int>::iterator ite = mstack.end();
	
// 	++it;
// 	--it;
// 	while (it != ite)
// 	{
// 		std::cout << *it << std::endl;
// 		++it;
// 	}
// 	std::stack<int> s(mstack);
// 	return 0;
// }

// int main()
// {
// 	std::list<int> mstack;

// 	mstack.push_back(5);
// 	mstack.push_back(17);

// 	std::cout << mstack.back() << std::endl;

// 	mstack.pop_back();
	
// 	std::cout << mstack.size() << std::endl;
	
// 	mstack.push_back(3);
// 	mstack.push_back(5);
// 	mstack.push_back(737);
// 	//[...]
// 	mstack.push_back(0);
	
// 	std::list<int>::iterator it = mstack.begin();
// 	std::list<int>::iterator ite = mstack.end();
	
// 	++it;
// 	--it;
// 	while (it != ite)
// 	{
// 		std::cout << *it << std::endl;
// 		++it;
// 	}
// 	std::list<int> s(mstack);
// 	return 0;
// }