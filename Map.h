#pragma once
#include "Obyect.h"
#include "Cell.h"
#include <irrlicht.h>

using namespace irr;

using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;

class Map
{
public:
	Cell mas[5][5];
	Obyect lin[5][5];
public:
	Map(void);
	~Map(void);
	void line();
	bool random();
	void Move(float x, float y, float z, Cell current, Cell future);
};

