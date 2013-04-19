#include <iostream>
#include <sstream>

using namespace std;

// #include "riesenie.h"

#if !defined( _RIESENIE_H_ )
#define _RIESENIE_H_

#include <string>

using namespace std;

class DOPRAVNE_PROSTRIEDKY {
 public: 		
  string vratDopravnyProstriedok(string obrazok);
  string vratSmer(string obrazok);
};

#endif


string DOPRAVNE_PROSTRIEDKY::vratDopravnyProstriedok(string obrazok)
{
	return "neznamy dopravny prostriedok";
}

string DOPRAVNE_PROSTRIEDKY::vratSmer(string obrazok)
{
	return "neznamy smer";
}