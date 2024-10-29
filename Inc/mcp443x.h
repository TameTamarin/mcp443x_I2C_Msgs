#include <stdint.h>
#include <stdio.h>

//used to turn on/off the main loop in the mcp443x_message.c file and the main loop in the main.c file
#define MY_SWITCH (0) 


uint8_t mcp44xx_address_byte(uint8_t address);
uint8_t increment_wiper(uint8_t channel);
uint8_t decrement_wiper(uint8_t channel);
uint8_t *set_pot_terminal_cons(uint8_t address, uint8_t channel, uint8_t switch_state);
uint8_t *set_pot_wiper_val(uint8_t address, uint8_t channel, uint8_t wiper_value);
uint8_t *read_pot_data(uint8_t address);