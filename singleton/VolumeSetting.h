#include<iostream>
using namespace std;

class VolumeSetting()
{
    public:
      void setVolume();
      uint8_t getVolume();
      VolumeSetting* getInstance();
    private:
      uint8_t currentVolume;
      static VolumeSetting* m_instance;
      VolumeSetting();
}

