/*
*	Author:	CS
*	Date:	2022_03_17	YYYY_MM_DD
*
*	Implement STL-style count_if() : where x = count(..), x is the number of occurrences of v in [b:e)
*	where predicate(v) is true
*
*/

#include <iostream>
#include <vector>
#include <list>
#include <string>

template <typename It, typename Pred>
int my_count_if(It begin, It end, Pred p) {
	int cnt{ 0 };
	while (begin != end) {
		if (p(*begin))
			++cnt;
		++begin;
	}
	return cnt;
}

int main() {
	std::vector<int> vect{ 5,50,5,100,5 };
	std::list<std::string> list{ "alpha", "bravo", "alpha", "alpha", "zulu" };

	std::cout << "The count_if should return three of int(5) in vect :\n";
	std::cout << my_count_if(vect.begin(), vect.end(), [](int a) { return a == 5; }) << std::endl;
	std::cout << "The count_if should return three of std::string(\"alpha\") in list : \n";
	std::cout << my_count_if(list.begin(), list.end(), [](std::string a) { return a == "alpha"; }) << std::endl;

	return 0;
}