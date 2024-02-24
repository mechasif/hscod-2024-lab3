#include "dma.hpp"

int main()
{  
	unsigned long int status ;
	DirectMemoryAccess *dma = new DirectMemoryAccess (0x40400000 , 0x0e000000 , 0x0f000000 );
	dma -> reset ();
	dma -> halt ();

	dma -> writeSourceByte (0);
	dma -> writeSourceByte (10) ;
	dma -> writeSourceByte (5);
	dma -> writeSourceByte (0);
	dma -> writeSourceString ("hello");
	dma -> hexdumpSource (9);

	dma -> setInterrupt (true , false , 0);
	dma -> ready ();

	dma -> setDestinationAddress (0x0f000000 );
	dma -> setSourceAddress (0x0e000000 );
	dma -> setDestinationLength (5);
	dma -> setSourceLength (9);

	printf ("Waiting for MM2S ...\n");
	do
	{
		status = dma -> getMM2SStatus ();
		dma -> dumpStatus ( status );
	} while ((!( status & 1 << 12) && !( status & 1 << 1)));

	printf ("Waiting for S2MM ...\n");
	do
	{
		status = dma -> getS2MMStatus ();
		dma -> dumpStatus ( status );
	} while ((!( status & 1 << 12) && !( status & 1 << 1)));

	dma -> hexdumpDestination (5);
    return 0;
}
