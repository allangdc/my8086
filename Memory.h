/*
 * Memory.h
 *
 *  Created on: Oct 10, 2014
 *      Author: allan
 */

#ifndef MEMORY_H_
#define MEMORY_H_

#include <vector>
#include "Device.h"

class Memory : public Device {
public:
	Memory();
	virtual ~Memory();
private:
	unsigned char *data;
	int size;
};

#endif /* MEMORY_H_ */
