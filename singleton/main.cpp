#include "VolumeSetting.h"


int main()
{
  VolumeSetting* volSetting = VolumeSetting::getInstance();
  volSetting->setVolume(100);
  cout << "Volume set to : " << volSetting->getVolume() << "\n";
  return 0;
}
