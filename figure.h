#pragma once
#include <iostream>
using namespace std;

class figure
{
private:
	float x1, x2, x3, x4;
	float y1, y2, y3, y4;
	float S;
	float P;
	float st1, st2, st3, st4; //dlini storon

public:
	figure(float x1_v, float x2_v, float x3_v, float x4_v, float y1_v, float y2_v, float y3_v, float y4_v, float SS, float PP, float sst1, float sst2, float sst3, float sst4) {
		x1 = x1_v;
		x2 = x2_v;
		x3 = x3_v;
		x4 = x4_v;
		y1 = y1_v;
		y2 = y2_v;
		y3 = y3_v;
		y4 = y4_v;
		S = SS;
		P = PP;
		st1 = sst1;
		st2 = sst2;
		st3 = sst3;
		st4 = sst4;
	}

	void show();
	bool is_prug();
	bool is_square();
	bool is_romb();
	bool is_in_circle();
	bool is_out_circle();
};

