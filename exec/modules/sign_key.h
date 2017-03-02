/*
sign_key.h
OpenPGP exectuable module

Copyright (c) 2013 - 2017 Jason Lee @ calccrypto@gmail.com

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

#ifndef __COMMAND_SIGN_KEY__
#define __COMMAND_SIGN_KEY__

#include "../../OpenPGP.h"
#include "module.h"

namespace module {

const Module sign_key(
    // name
    "sign-key",

    // positional arguments
    {
        "signer-key",
        "passphrase",
        "signee-key",
    },

    // optional arugments
    {
        std::make_pair("o", std::make_pair("output file",                                      "")),
        std::make_pair("a", std::make_pair("armored",                                         "t")),
        std::make_pair("c", std::make_pair("certification level (0x10 - 0x13 without '0x')", "13")),
    },

    // function to run
    [](std::map <std::string, std::string> & args) -> int {
        std::ifstream signer_file(args.at("signer-key"), std::ios::binary);
        if (!signer_file){
            std::cerr << "IOError: File '" + args.at("signer-key") + "' not opened." << std::endl;
            return -1;
        }

        std::ifstream signee_file(args.at("signee-key"), std::ios::binary);
        if (!signee_file){
            std::cerr << "IOError: File '" + args.at("signee-key") + "' not opened." << std::endl;
            return -1;
        }

        args["-a"] = lower(args.at("a"));

        PGPSecretKey signer(signer_file);
        PGPPublicKey signee(signee_file);

        output(::sign_primary_key(signer, args.at("passphrase"), signee, mpitoulong(hextompi(args.at("c")))).write((args.at("a") == "f")?1:(args.at("a") == "t")?2:0), args.at("o"));

        return 0;
    }
);

}

#endif