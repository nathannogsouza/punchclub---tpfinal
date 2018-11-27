#include "muaythai.hpp"

MuayThai::MuayThai(int level){
    _classe_id = MUAYTHAI_ID;
    _classe_nome = "Muay-thai";

    if(level == 1){
        _nome = "Cotovelada";
        _dano = 3;
    }
    else if(level == 2){
        _nome = "Joelhada";
        _dano = 4;
    }
}

Skills* MuayThai::nova_skill(int level){
    Skills *nova = new MuayThai(level);

    return nova;
}
