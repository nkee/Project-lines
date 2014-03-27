#pragma once

#include "Obyect.h"
#include <iostream>
using namespace std;

extern IrrlichtDevice *device;
extern ISceneManager *smgr;
extern IVideoDriver* driver;
Obyect::Obyect(void)
{
	m_position.X=0;
	m_position.Y=0;
	m_position.Z=0;
	type=-1;
}

void Obyect::Init()
{
	mas[0]="../Resources/enemies_01.X";
	mas[1]="../Resources/enemies_01.X";
	int v = rand()%2+0;
	type = v;
	core::string<char> f = mas[v];
	mesh = smgr->getMesh(f);
	node = smgr->addAnimatedMeshSceneNode(mesh);
	node->setPosition(m_position);//trouble
	//node->setMaterialTexture(0, driver->getTexture ("../Resources/enemies_01.tga"));
	node->setVisible(true);
	node->setMaterialFlag(EMF_LIGHTING, false);
	//node->setScale(vector3df(2,2,2));
	Isclick=false;
}

void Obyect::Clean()
{
type = -1;
mesh->drop();
Isclick = false;
}

Obyect::~Obyect(void)
{

}

void Obyect::Show()
{
	node->setVisible(true);
}

void Obyect::Hide()
{
	node->setVisible(false);
}

void Obyect::SetPosition(float x, float y, float z)
{
	m_position = vector3df(x,y,z);
}

void Obyect::setClicked(bool click)
{
	Isclick=click;
}
