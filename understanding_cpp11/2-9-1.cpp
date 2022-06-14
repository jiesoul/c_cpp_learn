//
// Created by JIESOUL on 2019/10/8.
//
class Poly;
typedef Poly p;

class LiLei {
  friend class Poly;
};

class Jim {
  friend Poly;
};

class HanMeiMei {
  friend p;
};
