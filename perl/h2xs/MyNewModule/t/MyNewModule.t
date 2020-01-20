# Before `make install' is performed this script should be runnable with
# `make test'. After `make install' it should work as `perl MyNewModule.t'

#########################

# change 'tests => 1' to 'tests => last_test_to_print';

# use Test::More tests => 2;
use Test::More qw( no_plan );


#########################

# Insert your test code below, the Test::More module is use()ed here so read
# its man page ( perldoc Test::More ) for help writing this test script.

BEGIN { use_ok('MyNewModule') };
BEGIN { require_ok('MyNewModule') };
can_ok( 'MyNewModule', 'new' );

my $moduleSetup = MyNewModule->new(
        userid   => "default"
);

isa_ok( $moduleSetup, 'MyNewModule' );

# userid
can_ok( $moduleSetup, qw( getUserid ));
is($moduleSetup->getUserid(),'default','getUserid is equal to default');

can_ok( $moduleSetup, qw( setUserid ));
ok($moduleSetup->setUserid( userid => 'phil' ),'setUserid to phil');

can_ok( $moduleSetup, qw( getUserid ));
is($moduleSetup->getUserid(),'phil','getUserid is equal to phil');

can_ok( $moduleSetup, qw( convertHexToAscii ));
is($moduleSetup->convertHexToAscii(ascii_str => "50" ),'P','convertHexToAscii 50 is equal to P');
is($moduleSetup->convertHexToAscii(ascii_str => "57" ),'W','convertHexToAscii 57 is equal to W');
is($moduleSetup->convertHexToAscii(ascii_str => "53" ),'S','convertHexToAscii 53 is equal to S');
is($moduleSetup->convertHexToAscii(ascii_str => "2D" ),'-','convertHexToAscii 2D is equal to -');
is($moduleSetup->convertHexToAscii(ascii_str => "39" ),'9','convertHexToAscii 39 is equal to 9');
is($moduleSetup->convertHexToAscii(ascii_str => "30" ),'0','convertHexToAscii 30 is equal to 0');
is($moduleSetup->convertHexToAscii(ascii_str => "32" ),'2','convertHexToAscii 32 is equal to 2');
is($moduleSetup->convertHexToAscii(ascii_str => "2D" ),'-','convertHexToAscii 2D is equal to -');
is($moduleSetup->convertHexToAscii(ascii_str => "31" ),'1','convertHexToAscii 31 is equal to 1');
is($moduleSetup->convertHexToAscii(ascii_str => "52" ),'R','convertHexToAscii 52 is equal to R');
