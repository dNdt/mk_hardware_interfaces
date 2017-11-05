
#pragma once

#include "stdint.h"

namespace UART{

enum class result{
	OK = 0,
	ERR,
	TIMEOUT
};

class uart_base{
	// Timeout type like TickType_t ( may be use portMAX_DELAY)
	virtual result tx(uint8_t *txBuf, uint16_t ln, uint32_t timeoutMs = 0 ) = 0;
	virtual result rx(uint8_t *rxBuf, uint16_t rxBufLn, uint32_t timeoutMs = 0 ) = 0;

};

}
