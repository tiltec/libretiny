/* This file was auto-generated from wblc5.json using boardgen */

#include <Arduino.h>

#ifdef LT_VARIANT_INCLUDE
#include LT_VARIANT_INCLUDE
#endif

// clang-format off
PinInfo lt_arduino_pin_info_list[PINS_COUNT] = {
	// D0: P24, PWM4
	{GPIO24, PIN_GPIO | PIN_IRQ | PIN_PWM,                      PIN_NONE, 0},
	// D1: P6, PWM0
	{GPIO6,  PIN_GPIO | PIN_IRQ | PIN_PWM,                      PIN_NONE, 0},
	// D2: P26, PWM5, IRDA
	{GPIO26, PIN_GPIO | PIN_IRQ | PIN_PWM,                      PIN_NONE, 0},
	// D3: P10, UART1_RX
	{GPIO10, PIN_GPIO | PIN_IRQ | PIN_UART,                     PIN_NONE, 0},
	// D4: P11, UART1_TX
	{GPIO11, PIN_GPIO | PIN_IRQ | PIN_UART,                     PIN_NONE, 0},
	// D5: P1, UART2_RX, I2C2_SDA
	{GPIO1,  PIN_GPIO | PIN_IRQ | PIN_I2C | PIN_UART,           PIN_NONE, 0},
	// D6: P0, UART2_TX, I2C2_SCL
	{GPIO0,  PIN_GPIO | PIN_IRQ | PIN_I2C | PIN_UART,           PIN_NONE, 0},
	// D7: P20, I2C1_SCL, TCK, FSCK
	{GPIO20, PIN_GPIO | PIN_IRQ | PIN_I2C | PIN_JTAG,           PIN_NONE, 0},
	// D8: P21, I2C1_SDA, TMS, MCLK, ^FCS
	{GPIO21, PIN_GPIO | PIN_IRQ | PIN_I2C | PIN_I2S | PIN_JTAG, PIN_NONE, 0},
	// D9: P22, TDI, FSI
	{GPIO22, PIN_GPIO | PIN_IRQ | PIN_JTAG,                     PIN_NONE, 0},
	// D10: P23, ADC3, TDO, FSO
	{GPIO23, PIN_GPIO | PIN_IRQ | PIN_ADC | PIN_JTAG,           PIN_NONE, 0},
};

PinInfo *lt_arduino_pin_gpio_map[] = {
	[0]  = &(lt_arduino_pin_info_list[6]),  // GPIO0 (D6)
	[1]  = &(lt_arduino_pin_info_list[5]),  // GPIO1 (D5)
	[6]  = &(lt_arduino_pin_info_list[1]),  // GPIO6 (D1)
	[10] = &(lt_arduino_pin_info_list[3]),  // GPIO10 (D3)
	[11] = &(lt_arduino_pin_info_list[4]),  // GPIO11 (D4)
	[20] = &(lt_arduino_pin_info_list[7]),  // GPIO20 (D7)
	[21] = &(lt_arduino_pin_info_list[8]),  // GPIO21 (D8)
	[22] = &(lt_arduino_pin_info_list[9]),  // GPIO22 (D9)
	[23] = &(lt_arduino_pin_info_list[10]), // GPIO23 (D10)
	[24] = &(lt_arduino_pin_info_list[0]),  // GPIO24 (D0)
	[26] = &(lt_arduino_pin_info_list[2]),  // GPIO26 (D2)
};
// clang-format on
