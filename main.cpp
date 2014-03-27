#pragma once
#include <irrlicht.h>
#include "Cell.h"
#include "Obyect.h"
#include "Map.h"

using namespace irr;

using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;
// just magic 
#ifdef _IRR_WINDOWS_
#pragma comment(lib, "Irrlicht.lib")
#pragma comment(linker, "/subsystem:windows /ENTRY:mainCRTStartup")
#endif
 IrrlichtDevice *device = createDevice( video::EDT_SOFTWARE, dimension2d<u32>(1366, 768), 16, false, false, false, 0);
  ISceneManager* smgr = device->getSceneManager();
  IVideoDriver* driver = device->getVideoDriver();
  Map karta;



ITexture* background = driver->getTexture("../Resources/Map1.jpg");
ITexture* mapa = driver->getTexture("../Resources/mapka.png");
	

int main()
{

	// IrrlichtDevice *device = createDevice( video::EDT_SOFTWARE, dimension2d<u32>(640, 480), 16, false, false, false, 0);

    if (!device)
        return 1;
	//MyEventReceiver receiver;
	  device->setWindowCaption(L"Hello World! - Irrlicht Engine Demo");

	  for(int i=0;i<5;i++)
	{
	for(int j=0;j<5;j++)
	{
	karta.lin[i][j].m_position.X = 610 + i*150;
	karta.lin[i][j].m_position.Y = 90 + j*150;

	}
	}





	   for(int i = 0; i < 5; i++)
	   {
		   for(int j = 0; j < 5; j++)
	   {
		   karta.lin[i][j].Init();
	   }
	   }
  /*  IGUIEnvironment* guienv = device->getGUIEnvironment();
	 guienv->addStaticText(L"Hello World! This is the Irrlicht Software renderer!",
        rect<s32>(10,10,260,22), true);*/
	/*  IAnimatedMesh* mesh = smgr->getMesh("../../media/sydney.md2");
    if (!mesh)
    {
        device->drop();
        return 1;
    }
    IAnimatedMeshSceneNode* node = smgr->addAnimatedMeshSceneNode( mesh );*/
	   /*if (node)
    {
        node->setMaterialFlag(EMF_LIGHTING, false);
        node->setMD2Animation(scene::EMAT_STAND);
        node->setMaterialTexture( 0, driver->getTexture("../../Resources/sydney.bmp") );
    }*/
//	receiver., camera);
		while(device->run())
    {
		driver->beginScene(true, true, SColor(255,100,101,140));
		 smgr->addCameraSceneNode(0, vector3df(0,30,-40), vector3df(0,5,0));
			IAnimatedMesh *mesh = smgr->getMesh("../Resources/enemies_01.X");
			ISceneNode *node = smgr->addAnimatedMeshSceneNode(mesh);
			node->setPosition(vector3df(610,90,20));
			node->setScale(vector3df(2,2,2));
		string <wchar_t> c;
		
	//	driver->draw2DImage(background, position2di(0,0),  recti(0,0,1366,768));
	  //  driver->draw2DImage(mapa, position2di(550,15),  recti(0,0,700,700));
 irr::core::position2d<s32> Coords;
  wchar_t e;
		Coords = device->getCursorControl()->getPosition();
  //irr::core::stringw Caption ("Mouse Coords: ");
 
 e =','; 
 core::string<char> s1;
 core::string<char> s2;
 char buff1[64];
gcvt(Coords.X, 10, buff1);
s1 = buff1;
char buff2[64];
gcvt(Coords.Y, 10, buff2);
s2=buff2;
irr::core::string<char> str;
s1=s1.c_str();
s2=s2.c_str();

  c=s1+s2;
 

            device->setWindowCaption(c.c_str());
        smgr->drawAll();
       // guienv->drawAll();

        driver->endScene();
    }
		 device->drop();

    return 0;
}
