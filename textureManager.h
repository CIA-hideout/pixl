// Module:			Gameplay Programming
// Assignment 1:	Pixl
// Student Name:	Elcoms Khang	(S10157558A)
//					Lin Lue			(S10158175E)
//					Amos Tan		(S10158017D)

// Programming 2D Games
// Copyright (c) 2011 by: 
// Charles Kelly
// textureManager.h v1.0

#ifndef _TEXTUREMANAGER_H       // Prevent multiple definitions if this 
#define _TEXTUREMANAGER_H       // file is included in more than one place
#define WIN32_LEAN_AND_MEAN

#include "graphics.h"
#include "constants.h"

class TextureManager
{
    // TextureManager properties
  private:
    UINT       width;       // width of texture in pixels
    UINT       height;      // height of texture in pixels
    LP_TEXTURE texture;     // pointer to texture
    const char *file;       // name of file
    Graphics *graphics;     // save pointer to graphics
    bool    initialized;    // true when successfully initialized
    HRESULT hr;             // standard return type

  public:
    // Constructor
    TextureManager();

    // Destructor
    virtual ~TextureManager();

    // Returns a pointer to the texture
    LP_TEXTURE getTexture() const {return texture;}

    // Returns the texture width
    UINT getWidth() const {return width;}

    // Return the texture height
    UINT getHeight() const {return height;}

    // Initialize the textureManager
    // Pre: *g points to Graphics object
    //      *file points to name of texture file to load
    // Post: The texture file is loaded
    virtual bool initialize(Graphics *g, const char *file);

    // Release resources
    virtual void onLostDevice();

    // Restore resourses
    virtual void onResetDevice();
};

#endif

