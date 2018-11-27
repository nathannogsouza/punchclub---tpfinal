#ifndef CAPOEIRA_HPP
#define CAPOEIRA_HPP

class Capoeira : public Skills {
public:
  //Capoeira();
  Capoeira(int level);
  Skills* nova_skill(int level);

};


#endif
