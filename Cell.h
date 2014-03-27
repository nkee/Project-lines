#pragma once

#include <irrlicht.h>


using namespace irr;
using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;

class Cell
{
public:
	vector3df ulcorner;
	float size;
public:
	
	 Cell(void);
	~Cell(void);
};

