#!/usr/bin/perl

# basic script to count records according to day on which they occurred

use strict;
use warnings;

# init the hash
my %H = ();

# loop thru the data, chg to read from stdin so you could pipe to this script
while (<DATA>) {
        print $_;
        # process the file
        if (m/^Nov (\d+) .*$/) {
                my $hashkey = $1;
                print "the hashkey is $hashkey \n";
                # check if hash key exists
                if (exists $H{$hashkey}) {
                        $H{$hashkey} = $H{$hashkey} + 1;
                } else {
                        $H{$hashkey} = 1;
                }
        print "hashkey: $hashkey - hash value $H{$hashkey} \n";
        }
}


# grab some dummy data from boot log
1;
__DATA__
Nov 11 05:18:51 servera NET[18124]: /sbin/dhclient-script : updated /etc/resolv.
conf
Nov 11 05:18:57 servera NET[18207]: /sbin/dhclient-script : updated /etc/resolv.
conf
Nov 11 06:17:01 servera NET[19167]: /sbin/dhclient-script : updated /etc/resolv.
conf
Nov 11 06:17:07 servera NET[19249]: /sbin/dhclient-script : updated /etc/resolv.
conf
Nov 11 17:04:03 servera NET[19587]: /sbin/dhclient-script : updated /etc/resolv.
conf
Nov 11 17:04:08 servera NET[19669]: /sbin/dhclient-script : updated /etc/resolv.
conf
Nov 21 10:00:44 servera NET[22368]: /sbin/dhclient-script : updated /etc/resolv.
conf
Nov 21 10:00:51 servera NET[22450]: /sbin/dhclient-script : updated /etc/resolv.
conf
Nov 26 08:41:43 servera NET[25215]: /sbin/dhclient-script : updated /etc/resolv.
conf
