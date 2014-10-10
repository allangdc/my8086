/*
 * Board.h
 *
 *  Created on: Oct 10, 2014
 *      Author: allan
 */

#ifndef BOARD_H_
#define BOARD_H_

#include "ic8086.h"

class Board {
public:
	Board();
	virtual ~Board();
//private:
	ic8086 my8086;
};

#endif /* BOARD_H_ */
