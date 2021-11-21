#include "VasRobot.h"

using namespace std;

VasRobot::VasRobot()
{
    //ctor
}

bool VasRobot::start(Bludiste & bludiste){
return true;
}

void VasRobot::krok(Bludiste & bludiste){

    if (bludiste.nahoru()) bludiste.nahoru();
    else {
        bludiste.vpravo();
        while (bludiste.dolu()) bludiste.dolu();
        bludiste.vpravo();
        };
}

string VasRobot::jmeno(){
    string jmeno = "Marek Belda";
    return jmeno;
}

bool VasRobot::stop(){
return true;
}

void VasRobot::krok(BludisteOdkryte & bludiste_odkryte){}

bool VasRobot::start(BludisteOdkryte & bludiste_odkryte){
return false;
}

