#/usr/bin/perl

#
# sample output
#
# json without sort
# {"a2":{"z":4},"bbb":{"x":3},"aaa":{"a":1,"b":2}}
#
# json with sort
# {"a2":{"z":4},"aaa":{"a":1,"b":2},"bbb":{"x":3}}

use JSON;
use strict;
use warnings;

my $data_ref = {
 'aaa' => { a => 1, b => 2, },
 'bbb' => { x => 3, },
 'a2'  => { z => 4, }
};

my $json = JSON::PP->new->allow_nonref;

print "json without sort\n";
my $js = $json->encode($data_ref);
print "$js\n\n";

print "json with sort\n";
$js = $json->sort_by(sub { $JSON::PP::a cmp $JSON::PP::b })->encode($data_ref);
print "$js\n";

1;
