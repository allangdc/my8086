/*
 * Device.h
 *
 *  Created on: Oct 13, 2014
 *      Author: allan
 */

#ifndef DEVICE_H_
#define DEVICE_H_

class Device {
public:
	Device();
	virtual ~Device();
	void SetAddress(unsigned char address);
	unsigned char GetAddress();
private:
	unsigned char address;
};

#endif /* DEVICE_H_ */
