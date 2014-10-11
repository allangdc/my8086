/*
 * main.cpp
 *
 *  Created on: Oct 10, 2014
 *      Author: allan
 */

#include <iostream>
#include <cstdlib>
#include "ic8086.h"

int main(int argc, char **argv)
{
	ic8086 ic;
	ic.regA.X = 0x0907;
	ic.FLAGS.X = 0;
	ic.FLAGS.A = 1;
	std::cout << (unsigned int) ic.FLAGS.X << std::endl;
	system("PAUSE");
	return (0);
}

