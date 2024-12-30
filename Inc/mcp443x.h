#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>

//used to turn on/off the main loop in the mcp443x_message.c file and the main loop in the main.c file
#define MY_SWITCH (0) 

static uint8_t wiper_chan_to_dev_address(uint8_t channel);
static uint8_t tcon_num_to_dev_address(uint8_t channel);
uint8_t mcp44xx_address_byte(uint8_t address);
uint8_t increment_wiper(uint8_t channel);
uint8_t decrement_wiper(uint8_t channel);
uint8_t set_pot_terminal_cons_cmd(uint8_t channel);
uint8_t set_pot_terminal_cons_data(uint8_t channel, bool hw_config_switch_state, bool term_a_switch_state, bool term_w_switch_state, bool term_b_switch_state);
uint8_t set_pot_wiper_val(uint8_t channel);
uint8_t read_pot_data(uint8_t channel);