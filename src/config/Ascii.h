// Copyright (c) 2018, The TurtleCoin Developers
//
// Please see the included LICENSE file for more information

#pragma once

#include <string>

const std::string windowsAsciiArt = "\n  _____     ___  ___   _____ ______   ___   ____     ___ \n"
                                    "   |    \   /  _]|   \ / ___/|      | /   \ |    \   /  _] \n"
                                    "   |  D  ) /  [_ |    (   \_ |      ||     ||  _  | /  [_  \n"
                                    "   |    / |    _]|  D  \__  ||_|  |_||  O  ||  |  ||    _]\n"
                                    "   |    \ |   [_ |     /  \ |  |  |  |     ||  |  ||   [_ \n"
                                    "   |  .  \|     ||     \    |  |  |  |     ||  |  ||     |\n"
                                    "   |__|\_||_____||_____|\___|  |__|   \___/ |__|__||_____|\n;
const std::string nonWindowsAsciiArt =
    "\n                                                                            \n"
    "██████╗ ███████╗██████╗ ███████╗████████╗ ██████╗ ███╗   ██╗███████╗\n"
    "██╔══██╗██╔════╝██╔══██╗██╔════╝╚══██╔══╝██╔═══██╗████╗  ██║██╔════╝\n"
    "██████╔╝█████╗  ██║  ██║███████╗   ██║   ██║   ██║██╔██╗ ██║█████╗  ║\n"
    "██╔══██╗██╔══╝  ██║  ██║╚════██║   ██║   ██║   ██║██║╚██╗██║██╔══╝  \n"
    "██║  ██║███████╗██████╔╝███████║   ██║   ╚██████╔╝██║ ╚████║███████╗║\n"
    "╚═╝  ╚═╝╚══════╝╚═════╝ ╚══════╝   ╚═╝    ╚═════╝ ╚═╝  ╚═══╝╚══════╝\n";

/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32

const std::string asciiArt = windowsAsciiArt;

#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
