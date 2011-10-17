#ifndef DATATYPES_H
#define DATATYPES_H

//Empty, xplayer, and oplayer are equivalent to normal, xwin and owin.
//This is so the two types can be casted to one another.
//Only xplayer and oplayer should be cast.  Behavior is undefined for
//other values.
enum PlayerType {EMPTY, XPLAYER, OPLAYER};
enum GameState {NORMAL, XWIN, OWIN, CATSGAME};

#endif // DATATYPES_H
