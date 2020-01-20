package MyNewModule;

use 5.008008;
use strict;
use warnings;

require Exporter;

our @ISA = qw(Exporter);

# Items to export into callers namespace by default. Note: do not export
# names by default without a very good reason. Use EXPORT_OK instead.
# Do not simply export all your public functions/methods/constants.

# This allows declaration	use MyNewModule ':all';
# If you do not need this, moving things directly into @EXPORT or @EXPORT_OK
# will save memory.
our %EXPORT_TAGS = ( 'all' => [ qw(
	
) ] );

our @EXPORT_OK = ( @{ $EXPORT_TAGS{'all'} } );

our @EXPORT = qw(
	
);

our $VERSION = '0.01';

my $userId = "";

sub new {
        my $class = shift;
        my $self = {@_};
        bless($self, $class);
        return $self;
}

sub setUserid {
        my $self = shift;
        my $args = {@_};
        unless (ref $self) {
                print "should call address() with an object not a class\n";
                return 0;
        }
        $self->{userid} = $args->{userid};
        return 1;
}

sub getUserid {
        my $self = shift;
        return $self->{userid};
}

# Convert Hex string to Ascii String
sub convertHexToAscii {
        my $self = shift;
        my $args = {@_};
        unless (ref $self) {
                print "should call address() with an object not a class\n";
                return 0;
        }
        return sprintf("%s", pack("H*", $args->{ascii_str}));
}

1;
__END__
=head1 NAME

MyNewModule - Perl extension for example h2xs

=head1 SYNOPSIS

  use MyNewModule;

=head1 DESCRIPTION

Stub documentation for MyNewModule, created by h2xs. 

=head2 EXPORT

None by default.

=head1 SEE ALSO

Mention other useful documentation such as the documentation of
related modules or operating system documentation (such as man pages
in UNIX), or any relevant external documentation such as RFCs or
standards.

If you have a mailing list set up for your module, mention it here.

If you have a web site set up for your module, mention it here.

=head1 AUTHOR

Phil Leschina, E<lt>phil@leschina.net<gt>

=head1 COPYRIGHT AND LICENSE

Copyright (C) 2013 by Phil Leschina

This library is free software; you can redistribute it and/or modify
it under the same terms as Perl itself, either Perl version 5.8.8 or,
at your option, any later version of Perl 5 you may have available.

=cut
