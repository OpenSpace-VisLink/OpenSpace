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

#include <modules/newhorizons/util/scannerdecoder.h>

namespace {
    const std::string _loggerCat = "ScannerDecoder";
}

namespace openspace {
   
ScannerDecoder::ScannerDecoder(const ghoul::Dictionary& dictionary) : _type("SCANNER")
{
    std::string value;
    for (int k = 0; k < dictionary.size(); k++){
        dictionary.getValue(std::to_string(k + 1), value);
        _spiceIDs.push_back(value);
    }
}
std::string ScannerDecoder::getDecoderType(){
    return _type;
}

std::vector<std::string> ScannerDecoder::getSpiceIDs(){
    return _spiceIDs;
}

void ScannerDecoder::setStopCommand(std::string stopCommand){
    _abort = stopCommand;
}

} // namespace openspace