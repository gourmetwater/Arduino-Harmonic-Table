#define power 14 //Range of output pins.
#define inputpin 14 //Range of input pins.
#define shiftby 2 //The first pin to be used for power.



void matrix(int onarray[power][inputpin][3]);
void play(int onarray[power][inputpin][3]);
void sendnotecommand(int midinote, int channel, int onoff);
void sendnoteoff(int midinote, int channel);
int computemidinotevalue(int i, int j);
void getbendvalue(int interval, int* MSB, int* LSB);
void sendnotebend(int bendLSB, int bendMSB, int channel);
bool computeemptystate(int onar[power][inputpin][3]);
void findfirst(int onar[power][inputpin][3], int firstar[2]);
