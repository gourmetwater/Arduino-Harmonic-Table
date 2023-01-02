#include "Declarations.h"

void sendnotebend(int bendLSB, int bendMSB, int channel)
{
  int sendpitchbend = 224 + channel;
  Serial.write(sendpitchbend);
  Serial.write(bendLSB);
  Serial.write(bendMSB);
}
