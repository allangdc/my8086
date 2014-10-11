/*
 * Board.cpp
 *
 *  Created on: Oct 10, 2014
 *      Author: allan
 */

#include "Board.h"

Board::Board() {
	Memory *mem1 = new Memory();
	Memory *mem2 = new Memory();
	mem1->SetAddress(0x00);
	mem2->SetAddress(0x01);
	devices.push_back(mem1);
	devices.push_back(mem2);
}

Board::~Board() {
	Device *device;
	std::vector<Device *>::iterator it = devices.begin();
	do {
		device = *it;
		delete device;
	} while( ++it != devices.end() );
}

