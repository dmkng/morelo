#pragma once
#include <string>

const std::string ascii_arqma_logo =
    "\n"
    "WWWWWWWWWWWWWWWWWWWWWWWWWWWW@=WWWWWWWWWWWWWWWWWWWWWWWWWWWWW\n"
    "WWWWWWWWWWWWWWWWWWWWWWWWW@+::.--+@WWWWWWWWWWWWWWWWWWWWWWWWW\n"
    "WWWWWWWWWWWWWWWWWWWWWW=:::-:+W=----:#WWWWWWWWWWWWWWWWWWWWWW\n"
    "WWWWWWWWWWWWWWWWWW@+::+@W+:#WWWW:-=@+--*@WWWWWWWWWWWWWWWWWW\n"
    "WWWWWWWWWWWWWWW#:+:#WWWW::@WWWWWW#--@WW=--:#WWWWWWWWWWWWWWW\n"
    "WWWWWWWWWWW@+::+@WWWWW#::WWWWWWWWWW+-*WWWW@:--*WWWWWWWWWWWW\n"
    "WWWWWWWW#:+:=WWWWWWWW=+*WWWWWWWWWWWW@--@WWWWWW=--:=WWWWWWWW\n"
    "WWWW@++:+@WWWWWWWWWW+:#WWWWWWWWWWWWWWW*-+WWWWWWWW@:-:*@WWWW\n"
    "WWW@:-@WWWWWWWWWWWW::@WWWWWWWWWWWWWWWWWW:-#WWWWWWWW@::-WWWW\n"
    "WWW@:-:WWWWWWWWWW#++WWWWWWWWWWWWWWWWWWWWW#-:WWWWW#+:#:-WWWW\n"
    "WWW@:-:=WWWWWWWW*+=WWWWWWWWWWWWWWWWWWWWWWWW+-=W*+:@WW:-WWWW\n"
    "WWW@:++-@WWWWWW+:#WWWWWWWWWWWWWWWWWWWWWWWW@=+::*WWWWW:-WWWW\n"
    "WWW@:+W::WWWW@+:WWWWWWWWWWWWWWWWWW@=++++::*#*+:*WWWWW+:WWWW\n"
    "WWW@:+W#:=WW#++WWWWWWWWWWW@=*+++::*#@WWWWWW@++=:#WWWW+:WWWW\n"
    "WWW@:+WW*:@*+=WWWW@=*++++:*#@WWWWWWWWWWWWWW+:@W*:@WWW+:WWWW\n"
    "WWW@+*WWW::++++++:*#@WWWWWWWWWWWWWWWWWWWWW=+#WWW::WWW+:WWWW\n"
    "WWW@+*WWW+:-:*@WWWWWWWWWWWWWWWWWWWWWWWWWW@+*WWWW@:*WW+:WWWW\n"
    "WWW@+*WW*+@*:++:+=WWWWWWWWWWWWWWWWWWWWWWW+:WWWWWW=:#W+:WWWW\n"
    "WWW@+*W*+@WW@:+WW#::+#WWWWWWWWWWWWWWWWWW=+#WWWWWWW*:@+:WWWW\n"
    "WWW@+*=+#WWWWW+:#WWWW=::+#WWWWWWWWWWWWW@+=WWWWWWWWW+++:WWWW\n"
    "WWW@+++#WWWWWWW#:*WWWWWW@*:+*#WWWWWWWWW*+WWWWWWWWWW@:+:WWWW\n"
    "WWW@++=WWWWWWWWWW+:@WWWWWWWW@+:+=@WWWW=+@WWWWWWWWWWW=::WWWW\n"
    "WWWW+:*@WWWWWWWWWW=:=WWWWWWWWWWW#+++##+=WW@@#=****+++:+WWWW\n"
    "WWWWWW@*++=WWWWWWWW@++@WWWWWWWWWWWWW=+:++*=#@@W@=*+*@WWWWWW\n"
    "WWWWWWWWWW=++*@WWWWWW=:#WWWWWWWWWWW=*#WWWWWW@**+=WWWWWWWWWW\n"
    "WWWWWWWWWWWWW@*++#WWWW@+*WWWWWWWW@**@WWWW=***@WWWWWWWWWWWWW\n"
    "WWWWWWWWWWWWWWWWW#++*@WW*+@WWWWW#*=WW@**+#WWWWWWWWWWWWWWWWW\n"
    "WWWWWWWWWWWWWWWWWWWW@*+*##:=WWW**##***@WWWWWWWWWWWWWWWWWWWW\n"
    "WWWWWWWWWWWWWWWWWWWWWWW@=++++=****#WWWWWWWWWWWWWWWWWWWWWWWW\n"
    "WWWWWWWWWWWWWWWWWWWWWWWWWWW#*:*@WWWWWWWWWWWWWWWWWWWWWWWWWWW";

const std::string ascii_arqma_info =
    "\n"
    "**********************************************************************\n"
    "You can set the level of process detailization through \"set_log <level|categories>\"\n"
    "command, where <level> is between 0 (no details) and 4 (very verbose),\n"
    "or custom category based levels (eg, *:WARNING).\n"
    "Use the \"help\" command to see the list of available commands.\n"
    "Use \"help <command>\" to see a command's documentation.\n"
    "**********************************************************************";
const std::string main_message_true =
    "\n"
    "The daemon is running offline and will not attempt to sync to the ArQ-Net.\n";
const std::string main_message_false =
    "\n"
    "The daemon will start synchronizing with the network. This may take a long time to complete.\n";
