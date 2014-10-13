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

struct pins {
	unsigned AD0 : 1;
	unsigned AD1 : 1;
	unsigned AD2 : 1;
	unsigned AD3 : 1;
	unsigned AD4 : 1;
	unsigned AD5 : 1;
	unsigned AD6 : 1;
	unsigned AD7 : 1;
	unsigned AD8 : 1;
	unsigned AD9 : 1;
	unsigned AD10 : 1;
	unsigned AD11 : 1;
	unsigned AD12 : 1;
	unsigned AD13 : 1;
	unsigned AD14 : 1;
	unsigned AD15 : 1;
	unsigned AD16 : 1;
	unsigned AD17 : 1;
	unsigned AD18 : 1;
	unsigned AD19 : 1;
	unsigned NMI : 1;
	unsigned INTR : 1;
	unsigned CLK : 1;
	union {
		unsigned MN : 1;
		unsigned MX_ : 1;
	};
	unsigned RD_ : 1;
	union {
		unsigned RQ : 1;
		unsigned GT0 : 1;
	};
	unsigned RQ_GT1 : 1;
	unsigned LOCK : 1;
	unsigned S2 : 1;
	unsigned S1 : 1;
	unsigned S0 : 1;
	unsigned QS0 : 1;
	unsigned QS1 : 1;
	unsigned TEST : 1;
	unsigned READY : 1;
	unsigned RESET : 1;
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

	struct pins PINS;
};

#endif /* IC8086_H_ */
