/*****************************************************************************************
*                                                                                       *
* OpenSpace                                                                             *
*                                                                                       *
* Copyright (c) 2014-2016                                                               *
*                                                                                       *
* Permission is hereby granted, free of charge, to any person obtaining a copy of this  *
* software and associated documentation files (the "Software"), to deal in the Software *
* without restriction, including without limitation the rights to use, copy, modify,    *
* merge, publish, distribute, sublicense, and/or sell copies of the Software, and to    *
* permit persons to whom the Software is furnished to do so, subject to the following   *
* conditions:                                                                           *
*                                                                                       *
* The above copyright notice and this permission notice shall be included in all copies *
* or substantial portions of the Software.                                              *
*                                                                                       *
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,   *
* INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A         *
* PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT    *
* HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF  *
* CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE  *
* OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                                         *
****************************************************************************************/

#include <modules/globebrowsing/other/tileprovidermanager.h>
#include <ghoul/logging/logmanager.h>

namespace {
    const std::string _loggerCat = "TileProviderManager";
}

namespace openspace {

    ThreadPool TileProviderManager::tileRequestThreadPool(15);


    TileProviderManager::TileProviderManager()
    {
    }

    TileProviderManager::~TileProviderManager()
    {
    }

    void TileProviderManager::addHeightMap(
        std::string name,
        std::shared_ptr<TileProvider> tileProvider)
    {
        _heightMapProviders.push_back(tileProvider);
    }

    void TileProviderManager::addColorTexture(
        std::string name,
        std::shared_ptr<TileProvider> tileProvider)
    {
        _colorTextureProviders.push_back(tileProvider);

    }
    /*
    std::shared_ptr<TileProvider> TileProviderManager::getHeightMap(std::string name)
    {
        return _heightMapProviders[name];
    }
    
    std::shared_ptr<TileProvider> TileProviderManager::getColorTexture(std::string name)
    {
        return _colorTextureProviders[name];
    }
    */

    const std::vector<std::shared_ptr<TileProvider> >&
        TileProviderManager::heightMapProviders()
    {
        return _heightMapProviders;
    }

    const std::vector<std::shared_ptr<TileProvider> >&
        TileProviderManager::colorTextureProviders()
    {
        return _colorTextureProviders;
    }

}  // namespace openspace
