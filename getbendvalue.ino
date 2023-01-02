#include "Declarations.h"

void getbendvalue(int interval, int* MSB, int* LSB)
{
   *MSB = 0; 
  *LSB = 0;
  
  switch (interval % 12)
  {
   case 1:
   *MSB = 45; *LSB = 29; break;
   case 2:
   *MSB = 83; *LSB = 121; break;
   case 3:
   *MSB = 74; *LSB = 1; break;
   case 4:
   *MSB = 55; *LSB = 30; break;
   case 5:
   *MSB = 62; *LSB = 95; break;
   case 6:
   *MSB = 57; *LSB = 94; break;
   case 7:
   *MSB = 65; *LSB = 32; break;
   case 8:
   *MSB = 72; *LSB = 97; break;
   case 9:
   *MSB = 53; *LSB = 126; break;
   case 10:
   *MSB = 44; *LSB = 6; break;
   case 11:
   *MSB = 56; *LSB = 63; break;
   case 0:
   *MSB = 64; *LSB = 0; break;
   case -1:
   *MSB = 82; *LSB = 98; break;
   case -2:
   *MSB = 44; *LSB = 6; break;
   case -3:
   *MSB = 53; *LSB = 126; break;
   case -4:
   *MSB = 72; *LSB = 97; break;
   case -5:
   *MSB = 65; *LSB = 32; break;
   case -6:
   *MSB = 70; *LSB = 33; break;
   case -7:
   *MSB = 62; *LSB = 95; break;
   case -8:
   *MSB = 55; *LSB = 30; break;
   case -9:
   *MSB = 74; *LSB = 1; break;
   case -10:
   *MSB = 83; *LSB = 121; break;
   case -11:
   *MSB = 71; *LSB = 64; break;
//   case 0:
//   *MSB = 64; *LSB = 0; break;
  }
}
