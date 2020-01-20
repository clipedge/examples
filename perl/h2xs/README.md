perl_module_using_h2xs
======================

example how-to create a perl module and tests using h2xs

[phil@servera perl_module_using_h2xs]$ git clone https://github.com/clipedge/perl_module_using_h2xs.git

Creating a perl module

1) Create the skeleton files

[phil@servera ~]$ h2xs -AXc -n MyNewModule
Defaulting to backwards compatibility with perl 5.8.8
If you intend this module to be compatible with earlier perl versions, please
specify a minimum perl version with the -b option.

Writing MyNewModule/lib/MyNewModule.pm
Writing MyNewModule/Makefile.PL
Writing MyNewModule/README
Writing MyNewModule/t/MyNewModule.t
Writing MyNewModule/Changes
Writing MyNewModule/MANIFEST

[phil@servera mydir]$ ls
MyNewModule

[phil@servera mydir]$ cd MyNewModule/

[phil@servera MyNewModule]$ ls
Changes  lib  Makefile.PL  MANIFEST  README  t

2) Write some code

[phil@servera MyNewModule]$ pwd
/home/phil/myperl/MyNewModule

[phil@servera MyNewModule]$ cd lib

[phil@servera lib]$ ls
MyNewModule.pm

[phil@servera lib]$ vi MyNewModule.pm 

[phil@servera t]$ cd ..

[phil@servera MyNewModule]$ ls
Changes  lib  Makefile.PL  MANIFEST  README  t

# write some tests

[phil@servera t]$ ls
MyNewModule.t
[phil@servera t]$ vi MyNewModule.t

# Change TEST_VERBOSE from 0 to 1 to enable debug print 
[phil@servera MyNewModule]$ vi Makefile

# --- MakeMaker test section:

#TEST_VERBOSE=0
TEST_VERBOSE=1


[phil@servera MyNewModule]$ perl Makefile.PL 
Checking if your kit is complete...
Looks good
Writing Makefile for MyNewModule
Writing MYMETA.yml and MYMETA.json

[phil@servera MyNewModule]$ make
cp lib/MyNewModule.pm blib/lib/MyNewModule.pm
Manifying blib/man3/MyNewModule.3pm

[phil@servera MyNewModule]$ make test
PERL_DL_NONLAZY=1 /usr/bin/perl "-MExtUtils::Command::MM" "-e" "test_harness(1, 'blib/lib', 'blib/arch')" t/*.t
t/MyNewModule.t .. 
ok 1 - use MyNewModule;
ok 2 - require MyNewModule;
ok 3 - MyNewModule->can('new')
ok 4 - The object isa MyNewModule
ok 5 - MyNewModule->can('getUserid')
ok 6 - getUserid is equal to default
ok 7 - MyNewModule->can('setUserid')
ok 8 - setUserid to phil
ok 9 - MyNewModule->can('getUserid')
ok 10 - getUserid is equal to phil
ok 11 - MyNewModule->can('convertHexToAscii')
ok 12 - convertHexToAscii 50 is equal to P
ok 13 - convertHexToAscii 57 is equal to W
ok 14 - convertHexToAscii 53 is equal to S
ok 15 - convertHexToAscii 2D is equal to -
ok 16 - convertHexToAscii 39 is equal to 9
ok 17 - convertHexToAscii 30 is equal to 0
ok 18 - convertHexToAscii 32 is equal to 2
ok 19 - convertHexToAscii 2D is equal to -
ok 20 - convertHexToAscii 31 is equal to 1
ok 21 - convertHexToAscii 52 is equal to R
1..21
ok
All tests successful.
Files=1, Tests=21,  0 wallclock secs ( 0.01 usr  0.04 sys +  0.01 cusr  0.04 csys =  0.10 CPU)
Result: PASS

[phil@servera perl_module_using_h2xs]$ git add MyNewModule

[phil@servera perl_module_using_h2xs]$ git commit
[master 6d5d59e] Initial check-in
 7 files changed, 245 insertions(+), 0 deletions(-)
 create mode 100644 MyNewModule/Changes
 create mode 100644 MyNewModule/MANIFEST
 create mode 100644 MyNewModule/MYMETA.json
 create mode 100644 MyNewModule/Makefile.PL
 create mode 100644 MyNewModule/README
 create mode 100644 MyNewModule/lib/MyNewModule.pm
 create mode 100644 MyNewModule/t/MyNewModule.t

[phil@servera perl_module_using_h2xs]$ git log --oneline
6d5d59e Initial check-in
ecc73a1 Initial commit

# push as root to avoid 

[phil@servera perl_module_using_h2xs]$ git push https://github.com/clipedge/perl_module_using_h2xs.git
Xlib: connection to ":0.0" refused by server
Xlib: No protocol specified


(gnome-ssh-askpass:27909): Gtk-WARNING **: cannot open display:  

[root@servera perl_module_using_h2xs]# git push https://github.com/clipedge/perl_module_using_h2xs.git
