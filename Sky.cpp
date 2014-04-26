#include "irrlicht.h"

#include "Sky.hpp"

using namespace irr;

Sky::Sky(irr::scene::ISceneManager* smgr, irr::video::IVideoDriver* driver)
{
    driver->setTextureCreationFlag(video::ETCF_CREATE_MIP_MAPS, false);
    skyNode=smgr->addSkyDomeSceneNode(driver->getTexture("media/sky.bmp"),16,8,0.95f,2.0f);
    driver->setTextureCreationFlag(video::ETCF_CREATE_MIP_MAPS, true);
    skyNode->setMaterialFlag(video::EMF_FOG_ENABLE, true);
}

Sky::~Sky()
{
    //dtor
}