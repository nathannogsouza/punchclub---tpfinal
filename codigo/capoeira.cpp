#include "capoeira.hpp"

Capoeira::Capoeira(int level){
    _classe_id = CAPOEIRA_ID;
    _classe_nome = "Capoeira";

    if(level == 1){
        _nome = "Chute Alto";
        _dano = 2;
    }
    else if(level == 2){
        _nome = "Armado Normal";
        _dano = 4;
    }
    else if(level == 3){
        _nome = "Armado Giratorio";
        _dano = 4;
    }
}

Skills* Boxe::nova_skill(int level){
    Skills *nova = new Capoeira(level);

    return nova;
}
