#ifndef _STAR_H_
#define _STAR_H_

#include "cocos2d.h"
using namespace cocos2d;

#define COLOR_GREEN 0
#define COLOR_RED 1
#define COLOR_YELLOW 2
#define COLOR_PURPLE 3
#define COLOR_BLUE 4

class Star : public Sprite{
public:
	
	static Star* create(int color);
	bool isSelected();
	inline void setSelected(bool b){selected = b;}
	int getColor();
	void setDesPosition(const Point& p);
	inline Point getDesPosition(){return desPosition;}
	void updatePosition();
	inline int getIndexI(){return index_i;}
	inline int getIndexJ(){return index_j;}
	inline void setIndex_ij(int i,int j){index_i = i;index_j = j;}
private:
	char* getImage(int color);

public:
	const static int MOVE_SPEED = 4;
	static const int COLOR_MAX_NUM = 5;
	static const int STAR_WIDTH = 48;
	static const int STAR_HEIGHT = 48;
private:
	int color;
	Point desPosition;
	bool selected;
	int index_i;
	int index_j;
};
#endif