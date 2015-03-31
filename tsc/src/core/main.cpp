/***************************************************************************
 * main.cpp  -  main routines and initialization
 *
 * Copyright © 2003 - 2011 Florian Richter
 * Copyright © 2013 - 2015 The TSC Contributors
 ***************************************************************************/
/*
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

/* *** *** *** *** *** *** *** *** *** *** *** *** *** *** *** *** *** */

#include "global_basic.hpp"
#include "errors.hpp"
#include "property_helper.hpp"
#include "xml_attributes.hpp"
#include "../scripting/scriptable_object.hpp"
#include "../objects/actor.hpp"
#include "../scenes/scene.hpp"
#include "scene_manager.hpp"
#include "filesystem/resource_manager.hpp"
#include "filesystem/package_manager.hpp"
#include "../user/preferences.hpp"
#include "tsc_app.hpp"

/**
 * C/C++ entry point.
 */
int main(int argc, char** argv)
{
    TSC::gp_app = new TSC::cApp();
    int result = TSC::gp_app->Run();
    delete TSC::gp_app;

    return result;
}
