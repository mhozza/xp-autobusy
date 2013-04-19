#include <iostream>
#include <cstring>
#include <string>

using namespace std;

#include "riesenie.h"
#include "tester.h"
#include "obrazky.h"

void testyDopravnychProstriedkov(){

  nastavSledovanieSkupiny("Testy dopravnych prostriedkov");

  DOPRAVNE_PROSTRIEDKY dp;

  testEqual("kolobezka", dp.vratDopravnyProstriedok(obrazky::kolobezka),"");
  testEqual("traktor", dp.vratDopravnyProstriedok(obrazky::traktor),"");
  testEqual("balon", dp.vratDopravnyProstriedok(obrazky::balon),"");
  testEqual("kocik", dp.vratDopravnyProstriedok(obrazky::kocik),"");
  testEqual("raketa", dp.vratDopravnyProstriedok(obrazky::raketa),"");
  testEqual("autobus", dp.vratDopravnyProstriedok(obrazky::autobus),"");
  testEqual("autobus", dp.vratDopravnyProstriedok(obrazky::autobus2),"");
  testEqual("trolejbus", dp.vratDopravnyProstriedok(obrazky::trolejbus),"");
  testEqual("elektricka", dp.vratDopravnyProstriedok(obrazky::elektricka),"");
  testEqual("bicykel", dp.vratDopravnyProstriedok(obrazky::bicykel),"");
  testEqual("korcula", dp.vratDopravnyProstriedok(obrazky::korcula),"");
  testEqual("lod", dp.vratDopravnyProstriedok(obrazky::lod),"");
  testEqual("lod", dp.vratDopravnyProstriedok(obrazky::lod2),"");
  testEqual("ponorka", dp.vratDopravnyProstriedok(obrazky::ponorka),"");
  testEqual("vzducholod", dp.vratDopravnyProstriedok(obrazky::vzducholod),"");
  testEqual("skateboard", dp.vratDopravnyProstriedok(obrazky::skateboard),"");

  zhodnotenieVysledkov();
}

void testySmeru(){

  nastavSledovanieSkupiny("Testy dopravnych prostriedkov");

  DOPRAVNE_PROSTRIEDKY dp;
  
  testEqual("doprava", dp.vratDopravnyProstriedok(obrazky::kolobezka),"");
  testEqual("doprava", dp.vratDopravnyProstriedok(obrazky::traktor),"");
  testEqual("hore", dp.vratDopravnyProstriedok(obrazky::balon),"");
  testEqual("doprava", dp.vratDopravnyProstriedok(obrazky::kocik),"");
  testEqual("hore", dp.vratDopravnyProstriedok(obrazky::raketa),"");
  testEqual("doprava", dp.vratDopravnyProstriedok(obrazky::autobus),"");
  testEqual("dolava", dp.vratDopravnyProstriedok(obrazky::autobus2),"");
  testEqual("dolava", dp.vratDopravnyProstriedok(obrazky::trolejbus),"");
  testEqual("dolava", dp.vratDopravnyProstriedok(obrazky::elektricka),"");
  testEqual("doprava", dp.vratDopravnyProstriedok(obrazky::bicykel),"");
  testEqual("doprava", dp.vratDopravnyProstriedok(obrazky::korcula),"");
  testEqual("doprava", dp.vratDopravnyProstriedok(obrazky::lod),"");
  testEqual("dolava", dp.vratDopravnyProstriedok(obrazky::lod2),"");
  testEqual("dolava", dp.vratDopravnyProstriedok(obrazky::ponorka),"");
  testEqual("dolava", dp.vratDopravnyProstriedok(obrazky::vzducholod),"");
  testEqual("doprava", dp.vratDopravnyProstriedok(obrazky::skateboard),"");

  

  zhodnotenieVysledkov();
}
