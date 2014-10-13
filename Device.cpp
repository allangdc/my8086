/*
 * Device.cpp
 *
 *  Created on: Oct 13, 2014
 *      Author: allan
 */

#include "Device.h"

Device::Device() {
	// TODO Auto-generated constructor stub

}

Device::~Device() {
	// TODO Auto-generated destructor stub
}

void Device::SetAddress(unsigned char address) {
	this->address = address;
}

unsigned char Device::GetAddress() {
	return address;
}
