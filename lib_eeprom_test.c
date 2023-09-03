#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/spi.h"

#define PIN_CS
#define PIN_SK
#define PIN_DI
#define PIN_DO
#define PIN_ORG // internal organization
/*
enum class EEPROM_PINS: int
{
    CS = PIN_CS,
    SK = PIN_SK,
    DI = PIN_DI,
    DO = PIN_DO,
    ORG = PIN_ORG
};
*/

int main()
{
    stdio_init_all();


    puts("Hello, world!");

    return 0;
}
