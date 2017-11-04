
#pragma once

#include "stdint.h"

namespace UART{

enum class result{
	OK = 0,
	ERR,
	TIMEOUT
};

class uart_base{

	virtual result tx(uint8_t *txBuf, uint16_t ln, uint16_t timeoutMs = 0 ) = 0;
	virtual result rx(uint8_t *rxBuf, uint16_t rxBufLn) = 0;

};

}
