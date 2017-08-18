/*

	LIBCW.H - CW Radio Impleentation library for STM32
	(c) Denis S. Sovkov 03/2017

*/

#define WORK_TIME 50

int CopyCharArray(uint8_t *Buffer,uint8_t *Array);
void SendChar(unsigned char Char);
void SendString(char *String);

