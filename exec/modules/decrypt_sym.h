/*
decrypt_sym.h
OpenPGP exectuable module

Copyright (c) 2013 - 2017 Jason Lee @ calccrypto at gmail.com

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/

#ifndef __COMMAND_DECRYPT_SYM__
#define __COMMAND_DECRYPT_SYM__

#include "../../OpenPGP.h"
#include "module.h"

namespace module {

const Module decrypt_sym(
    // name
    "decrypt-sym",

    // positional arguments
    {
        "file",
        "passphrase",
    },

    // optional arguments
    {
        std::make_pair("-o", std::make_pair("output file", "")),
    },

    // optional flags
    {

    },

    // function to run
    [](const std::map <std::string, std::string> & args,
       const std::map <std::string, bool>        & flags) -> int {
        std::ifstream msg(args.at("file"), std::ios::binary);
        if (!msg){
            std::cerr << "Error: File '" + args.at("file") + "' not opened." << std::endl;
            return -1;
        }

        const PGPMessage message(msg);
        std::string error;

        const std::string cleartext = ::decrypt_sym(message, args.at("passphrase"), error);

        if (error.size()){
            std::cerr << error << std::endl;
        }
        else{
            output(cleartext, args.at("-o"));
        }

        return 0;
    }
);

}

#endif