/*
 * Memory.cpp
 *
 *  Created on: Oct 10, 2014
 *      Author: allan
 */

#include "Memory.h"

Memory::Memory() {
	size = 65536;
	data = new unsigned char[size];
}

Memory::~Memory() {
	delete [] data;
}

