#include "stdafx.h"
#include <iostream>
#include <thread>

int main()
{
	std::cout << "ideal thread num ==" << std::thread::hardware_concurrency() << std::endl;

	std::cout << "17:33" << std::endl;

}


