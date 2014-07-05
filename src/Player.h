//
//  Player.h
//  The_Algorithmic_Composer
//
//  Created by Laura Sirvent Collado on 12/06/14.
//
//

#ifndef __The_Algorithmic_Composer__Player__
#define __The_Algorithmic_Composer__Player__

#include <iostream>
#include <vector>
#include "Figure.h"
using namespace std;

class Player {

public:
	Player(int b = 60);
	~Player();
	void play(std::vector<Figure *> f);
	void update();
	void setTempo(int b){ BPM = b; }
	bool isAllPlayed(){ return allPlayed; }
	bool isPlaying(){ return playing; }
private:
	int BPM;
	int count;
	int x;
	std::vector<Figure *> fragment;
	int i;
	bool allPlayed;
	bool playing;

};

#endif /* defined(__The_Algorithmic_Composer__Player__) */
