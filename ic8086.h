/*
 * ic8086.h
 *
 *  Created on: Oct 10, 2014
 *      Author: allan
 */

#ifndef IC8086_H_
#define IC8086_H_


union Register_XHL {
	unsigned short X;
	struct {
		unsigned char L;
		unsigned char H;
	};
};

union FLAG {
	unsigned short X;
	struct {
		unsigned C : 1;
		unsigned   : 1;
		unsigned P : 1;
		unsigned   : 1;
		unsigned A : 1;
		unsigned   : 1;
		unsigned Z : 1;
		unsigned S : 1;
		unsigned T : 1;
		unsigned I : 1;
		unsigned D : 1;
		unsigned O : 1;
		unsigned   : 1;
		unsigned   : 1;
		unsigned   : 1;
		unsigned   : 1;
	};
};


class ic8086 {
public:
	ic8086();
	virtual ~ic8086();
//private:
	Register_XHL	regA;
	Register_XHL	regB;
	Register_XHL	regC;
	Register_XHL	regD;

	unsigned short	SP;
	unsigned short	BP;
	unsigned short	DI;
	unsigned short	SI;

	unsigned short	IP;
	FLAG			FLAGS;

	unsigned short	CS;
	unsigned short	DS;
	unsigned short	ES;
	unsigned short	SS;
};

#endif /* IC8086_H_ */
