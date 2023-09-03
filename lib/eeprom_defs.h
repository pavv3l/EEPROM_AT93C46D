#ifndef __EEPROM_DEFS__
#define __EEPROM_DEFS__

#define HIGH 1
#define LOW 0

#define SB HIGH

#define READ 10 A6-A0
#define EWEN 00 11XX XXX
#define ERASE 11 A6-A0
#define WRITE 01 A6-A0
#define ERAL 00 10XX XXX
#define WRAL 00 01XX XXX
#define EWDS 00 00XX XXX


#endif // __EEPROM_DEFS__