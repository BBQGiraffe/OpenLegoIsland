#ifndef  LEGOGAMESTATE_H
#define LEGOGAMESTATE_H
#include "LegoEntity.h"
class LegoGameState {
private:

	const char* path;
public:
	LegoGameState();
	long Load(unsigned long);
	void SetSavePath(const char* path);
	void SerializePlayersInfo(short);
	void SerializeScoreHistory(short);
};


#endif // ! LEGOGAMESTATE_H
