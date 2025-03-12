#include "..\includes\mapdatabase.h"

std::vector<Map> MapDatabase::getAllMaps() {
    return {
        Map("Mirage",0.95,1.05),
        Map("Inferno",1.05,0.95),
        Map("Nuke",0.85,1.15),
        Map("Dust2",1.05,0.95),
        Map("Anubis",1.15,0.85),
        Map("Ancient",1.05,0.95),
        Map("Train",1.05,0.95),
    };
}