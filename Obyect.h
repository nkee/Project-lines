#pragma once

#include <irrlicht.h>
#include "Cell.h"

using namespace irr;
using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;

class Obyect
{

public:
	core::string<char> mas[2];
	int type;
	vector3df m_position;
	//IAnimatedMeshSceneNode *node;
ISceneNode *node;
	IAnimatedMesh *mesh;
	bool Isclick;
	
public:
	void Init();
	void Clean();
	void Show();
	void Hide();
	void SetPosition(float x, float y, float z);
	void setClicked(bool clicked);
	Obyect(void);
	~Obyect(void);
};
