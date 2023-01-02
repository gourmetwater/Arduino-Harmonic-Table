#include "Declarations.h"

void findfirst(int onar[power][inputpin][3], int firstar[2])
{
  for (int i = 0; i < 15; i++)
  {
    for (int j = 0; j < 8; j++)
    {
      if (onar[i][j][0] == 1)
      {
        firstar[0] = i;
        firstar[1] = j;
        return;
      } 
    }
  }
}
