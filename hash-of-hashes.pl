#!/usr/bin/perl

my %HoH = (); # Hash of Hashes (i.e.: 4-1)

#my %iH = ();  # Interface Hash (i.e.: ETH,FC,WAN)


$HoH{ '4-1' }{ 'WAN' } = "wan4-1:inp;wan4-1:out";
$HoH{ '4-1' }{ 'ETH' } = "eth4-1:inp;eth4-1:out";
$HoH{ '4-1' }{ 'FC' }  = "fc4-1:inp;fc4-1:out";

$HoH{ '3-3' }{ 'WAN' } = "wan3-3:inp;wan3-3:out";
$HoH{ '3-3' }{ 'ETH' } = "eth3-3:inp;eth3-3:out";
$HoH{ '3-3' }{ 'FC' }  = "fc3-3:inp;fc3-3:out";

my $rHoH = \%HoH;

for my $cardPort ( sort keys %$rHoH ) {

	print ( "cardPort: $cardPort\n" );

	for my $interfaceType ( sort keys %{$rHoH->{ $cardPort }} ) {

		print ( "interfaceType: $interfaceType\n" );
		print ( "interfaceValue: $rHoH->{ $cardPort }{ $interfaceType }\n" );

	}

	#print "===> %$rHoH->{ $cardPort }->{ 'WAN' } \n";

}
