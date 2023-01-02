#include "Declarations.h"
int computemidinotevalue(int i, int j)
{
  int basenote;
  int interval;
  
    basenote = (23+(3*i));
    interval = j*4;
    int newnote = basenote + (interval);
    return newnote;
}
