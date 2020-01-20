#!/usr/bin/perl

use strict;
use warnings;

# add the following line to change @INC to find perl modules in 
# non-standard locations
use lib "/home/phil/perl_module_using_h2xs/MyNewModule/lib";
use MyNewModule;

my $moduleSetup = MyNewModule->new(
        userid   => "Phil Leschina"
);

printf "Hello %s\n", $moduleSetup->getUserid();

