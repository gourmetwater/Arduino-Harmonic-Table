#include "Declarations.h"

bool computeemptystate(int onar[power][inputpin][3])
{
  for (int i = 0; i < 15; i++)
  {
    for (int j = 0; j < 8; j++)
    {
      if (onar[i][j][0] == 1)
      {
        return false;
      } 
    }
  }
  return true;
}
